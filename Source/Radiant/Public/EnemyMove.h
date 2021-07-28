// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemyMove.generated.h"


// �Ʒ��� ��� �̵��ϰ� �ʹ�.
// �ʿ�Ӽ� : �̼�

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RADIANT_API UEnemyMove : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemyMove();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// �̼�
	UPROPERTY(EditAnywhere, Category = "Setting")
	float speed = 200;

	// ������Ʈ�� �����ϰ� �ִ� ����
	class AEnemy* me;

	// Target
	UPROPERTY(VisibleAnywhere, Category = "Target")
	class AActor* target;
};
