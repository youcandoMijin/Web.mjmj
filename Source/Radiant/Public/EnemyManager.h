// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

// �����ð��� �ѹ��� ���� ����� �ʹ�.
// 1. ���� ����� �ʹ�.
// 2. �����ð��� ������
// 3. �ð��� �귶���ϱ�
//�ʿ�Ӽ� : ������, �����ð�, ����ð� 
UCLASS()
class RADIANT_API AEnemyManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	
	//�ʿ�Ӽ� : ������, �����ð�, ����ð� 
	UPROPERTY(EditDefaultsOnly, Category = "Enemy Factory")
	TSubclassOf<class AEnemy> enemyFactory;

	UPROPERTY(EditAnywhere, Category="Setting")
	float createTime = 1;

	UPROPERTY()
	float currentTime = 0;
	
};
