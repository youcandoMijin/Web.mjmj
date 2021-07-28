// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyMove.h"
#include "Enemy.h"
#include <Kismet/GameplayStatics.h>
#include "EnemyGoal.h"

// Sets default values for this component's properties
UEnemyMove::UEnemyMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyMove::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<AEnemy>(GetOwner());
	
	// target ã��
	target = UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyGoal::StaticClass());

}


// Called every frame
void UEnemyMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// �Ʒ��� ��� �̵��ϰ� �ʹ�.
	// P = P0 + vt
	FVector v = FVector::RightVector * speed;

	// Target �� �������� �̵��ϱ�
	if (target)
	{
		v = target->GetActorLocation() - me->GetActorLocation();
		v.Normalize();
		v *= speed;
	}
	FVector P = me->GetActorLocation() + v * DeltaTime;
	me->SetActorLocation(P, true);
}

