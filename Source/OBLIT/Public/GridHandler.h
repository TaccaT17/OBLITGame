// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class OBLIT_API GridHandler
{
public:
	enum TileType {
		NONE,
		EVENT,
		ENEMY,
		BOSS,
		DOOR
	};

	struct Tile {
	public:
		Tile() 
		{
			myType = (TileType)FMath::RandRange(0, 4);
		};
		TileType myType;
	};

	struct GridRow {
	public:
		GridRow() 
		{ 
			row = {}; 
		};
		TArray<Tile> row;
	};

	GridHandler();
	~GridHandler();

	void CreateGrid(int32 columns, int32 rows);

private:
	TArray<GridRow> _grid;
};



