// Fill out your copyright notice in the Description page of Project Settings.


#include "GridHandler.h"

GridHandler::GridHandler()
{
	_grid = {};
	CreateGrid(5, 5);
}

GridHandler::~GridHandler()
{
}

void GridHandler::CreateGrid(int32 columns, int32 rows) 
{
	FString debugGrid = "";
	for (size_t i = 0; i < columns; i++)
	{
		_grid.Add(GridRow());
		for (size_t j = 0; j < rows; j++)
		{
			_grid[i].row.Add(Tile());
			debugGrid += FString::FromInt((int32)_grid[i].row[j].myType);
			debugGrid += ", ";
		}
		debugGrid += "\n";
	}

	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, debugGrid);
	}
}
