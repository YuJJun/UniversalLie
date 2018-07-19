#include "stdafx.h"
#include "GameState.h"
#include <iostream>

using namespace std;


GameState::GameState()
{
	x = 10;
}


void GameState::update()
{
	cout << "Game state updated" << endl;
	cout << x << endl;
}
