#include <iostream>
#include <string>
#include <list>
using namespace std;

#include "Game_Checker.cpp"
#include "Opponent.cpp"
;


//prints out the current updated board
void PrintBoard(string TopLeft, string TopMiddle, string TopRight, string MiddleLeft, string MiddleMiddle, string MiddleRight, string BottomLeft, string BottomMiddle, string BottomRight)
{
	cout << "  " << TopLeft << "  " << "|" << "  " << TopMiddle << "  " << "|" << "  " << TopRight << "\n";
	cout << "-----------------" << "\n";
	cout << "  " << MiddleLeft << "  " << "|" << "  " << MiddleMiddle << "  " << "|" << "  " << MiddleRight << "\n";
	cout << "-----------------" << "\n";
	cout << "  " << BottomLeft << "  " << "|" << "  " << BottomMiddle << "  " << "|" << "  " << BottomRight << "\n";
}


int main()
{
	//gets the game started for the first time
	list<string> scores;
	bool IsGameOver = false;
	cout << "Welcome \n";
	string TL = "1";
	string TM = "2";
	string TR = "3";
	string ML = "4";
	string MM = "5";
	string MR = "6";
	string BL = "7";
	string BM = "8";
	string BR = "9";
	PrintBoard(TL, TM, TR, ML, MM, MR, BL, BM, BR);
	
	//the game loop
	while (IsGameOver == false)
	{
		//gets an input from the user and makes sure it's valid
		string input = "beans";
		while (input != TL && input != TM && input != TR && input != ML && input != MM && input != MR && input != BL && input != BM && input != BR || input == "O")
		{
			cout << "Type the number of the square that you would like to play: \n";
			cin >> input;
		}

		// Sets the spot as now belonging to the player (X)
		if (input == TL)
		{
			TL = "X";

		}
		else if (input == TM)
		{
			TM = "X";

		}
		else if (input == TR)
		{
			TR = "X";

		}
		else if (input == ML)
		{
			ML = "X";

		}
		else if (input == MM)
		{
			MM = "X";

		}
		else if (input == MR)
		{
			MR = "X";

		}
		else if (input == BL)
		{
			BL = "X";

		}
		else if (input == BM)
		{
			BM = "X";

		}
		else if (input == BR)
		{
			BR = "X";

		}

		//updates the board and checks to see if the game is over
		PrintBoard(TL, TM, TR, ML, MM, MR, BL, BM, BR);
		IsGameOver = Game_Checker().CheckForGameOver(TL, TM, TR, ML, MM, MR, BL, BM, BR);

		//adds a win for the player if the player has won
		if (IsGameOver == true)
		{
			scores.push_back("win");
		}
		//continues the game if the player hasn't won 
		else
		{
			//does the enemies turn
			cout << "\n and now the enemies turn... \n";
			string opponentsChoice = Opponent().TakeTurn(TL, TM, TR, ML, MM, MR, BL, BM, BR);

			// Sets the opponents choice of a square to be theirs (0)
			if (opponentsChoice == TL)
			{
				TL = "O";

			}
			else if (opponentsChoice == TM)
			{
				TM = "O";

			}
			else if (opponentsChoice == TR)
			{
				TR = "O";

			}
			else if (opponentsChoice == ML)
			{
				ML = "O";

			}
			else if (opponentsChoice == MM)
			{
				MM = "O";

			}
			else if (opponentsChoice == MR)
			{
				MR = "O";

			}
			else if (opponentsChoice == BL)
			{
				BL = "O";

			}
			else if (opponentsChoice == BM)
			{
				BM = "O";

			}
			else if (opponentsChoice == BR)
			{
				BR = "O";

			}
			//handles the case of a tied game
			else
			{
				IsGameOver = true;
				scores.push_back("tie");
			}

			//updates board and checks for potential game overs
			PrintBoard(TL, TM, TR, ML, MM, MR, BL, BM, BR);
			IsGameOver = Game_Checker().CheckForGameOver(TL, TM, TR, ML, MM, MR, BL, BM, BR);

			//logs the players loss if they've lost
			if (IsGameOver == true)
			{
				scores.push_back("loss");
			}
		}

		//starts a new game if the game has ended
		if (IsGameOver == true)
		{
			IsGameOver = false;
			cout << "\n \n scores: ";

			for (auto v : scores)
			{
				cout << v << " ";
			}
			cout << "\n \n";
			TL = "1";
			TM = "2";
			TR = "3";
			ML = "4";
			MM = "5";
			MR = "6";
			BL = "7";
			BM = "8";
			BR = "9";

			PrintBoard(TL, TM, TR, ML, MM, MR, BL, BM, BR);

		}
		
	}
	






    return 0;
};