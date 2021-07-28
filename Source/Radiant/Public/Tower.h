// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tower.generated.h"

UCLASS()
class RADIANT_API ATower : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATower();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// # �Ӽ�
	// Ÿ�� ��ȣ 0 �⺻, 1 ������, 2 ���ο�
	int idx;

	// ��Ÿ�	
	float range;

public:

	// ��Ÿ� ���� �����´�.  -> Ÿ�� ��ġ �� ui���� ������ �ʿ��ϴ�.
	float GetRange()
	{
		return range;
	}
};
