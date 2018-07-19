// UniversalLIe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "TitleScreen.h"
#include "BattleState.h"

using namespace std;

void readFile(int);


int main()
{
	GameState *state = new BattleState();
	state -> update();

	

	//system("pause");
	delete state;
    return 0;
}

void readFile(int time)
{
	ifstream file;
	file.open("GameScript.txt");
	if (!file.is_open())
	{
		cout << "Not found" << endl;
		return;
	}
	string word;
	while (file >> word)
	{
		int length = word.size();

		if (word == "@") //Double end line
		{
			cout << endl << endl;
		}

		else if (word == "#") //Single end line
		{
			cout << endl;
		}

		else
		{
			for (int i = 0; i < length; ++i)
			{
				Sleep(time);
				cout << word.substr(i, 1);
			}

			cout << " ";
		}
			

	}
}
