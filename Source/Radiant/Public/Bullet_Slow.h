// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "Bullet_Slow.generated.h"

UCLASS()
class RADIANT_API ABullet_Slow : public ABullet
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet_Slow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// OverlapBegin �浹 �̺�Ʈ �߻� �� ȣ���� �Լ�  ->  �θ� Ŭ���� �Լ� ������
	virtual void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};
