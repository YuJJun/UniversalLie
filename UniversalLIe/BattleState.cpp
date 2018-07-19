#include "stdafx.h"
#include "BattleState.h"
#include <iostream>

using namespace std;


BattleState::BattleState()
{
}

void BattleState::update()
{
	cout << "Battle Start!" << endl;
	cout << player << " VS " << enemy << endl;
}


