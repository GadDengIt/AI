// dracula.c
// Implementation of your "Fury of Dracula" Dracula AI

#include <stdlib.h>
#include <stdio.h>
#include "Game.h"
#include "DracView.h"

void decideDraculaMove(DracView gameState)
{
	// TODO ...
	// Replace the line below by something better
	/*
	int numLocations;
	printf("whereami %d", whereIs(gameState,4));
	LocationID *bestPlay= whereCanIgo(gameState, &numLocations, TRUE, FALSE);
   */
	printf("round %d\n where is %d", giveMeTheRound(gameState),whereIs(gameState, 4));
	if (giveMeTheRound(gameState)==0){
		registerBestPlay("CD","Mwuhahahaha");
		
	}else if (whereIs(gameState, 4)==CASTLE_DRACULA){
		registerBestPlay("GA","Mwuhahahaha");
		
	}else if (whereIs(gameState, 4)==GALATZ){
		registerBestPlay("CN","Mwuhahahaha");
		
	}else if (whereIs(gameState, 4)==CONSTANTA){
		registerBestPlay("BC","Mwuhahahaha");
		
	}else if (whereIs(gameState, 4)==BUCHAREST){
		registerBestPlay("BE","Mwuhahahaha");
		
	}else if (whereIs(gameState, 4)==BELGRADE){
		registerBestPlay("SZ","Mwuhahahaha");
		
	}else if (whereIs(gameState, 4)==SZEGED){
		registerBestPlay("BD", "MUAHAHAHA");
		
	}else if (whereIs(gameState, 4)==BUDAPEST){
		registerBestPlay("KL", "MUAHAHAHA");
		
	}else{
		registerBestPlay("CD","Mwuhahahaha");
		
	}
	
}
