#pragma once
#include "GameState.h"
#include <string>

using namespace std;


class BattleState:public GameState
{
public:
	BattleState();
	void update();

private:
	string player = "John";
	string enemy = "Goblin";
};

