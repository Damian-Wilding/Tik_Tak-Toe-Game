#include <iostream>
#include <string>
using namespace std;

#include "Game_Checker.cpp"
#include "Opponent.cpp"
;

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
	
	while (IsGameOver == false)
	{
		string input = "beans";
		while (input != TL && input != TM && input != TR && input != ML && input != MM && input != MR && input != BL && input != BM && input != BR || input == "O")
		{
			cout << "Type the number of the square that you would like to play: \n";
			cin >> input;
		}


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


		PrintBoard(TL, TM, TR, ML, MM, MR, BL, BM, BR);

		IsGameOver = Game_Checker().CheckForGameOver(TL, TM, TR, ML, MM, MR, BL, BM, BR);
		if (IsGameOver == true)
		{
			break;
		}
		else
		{
			cout << "\n and now the enemies turn... \n";
			string opponentsChoice = Opponent().TakeTurn(TL, TM, TR, ML, MM, MR, BL, BM, BR);

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

			PrintBoard(TL, TM, TR, ML, MM, MR, BL, BM, BR);
			IsGameOver = Game_Checker().CheckForGameOver(TL, TM, TR, ML, MM, MR, BL, BM, BR);
		}
		
	}
	






    return 0;
};