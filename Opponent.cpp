#include <iostream>
using namespace std;

class Opponent : Game_Checker
{
	public:
		Opponent()
		{
			
		}

		//takes all the spots on the board and chooses a random unoccupied one to play. 
		//function returns which spot it will be playing
		string TakeTurn(string TL, string TM, string TR, string ML, string MM, string MR, string BL, string BM, string BR)
		{
			CheckForGameOver(TL, TM, TR, ML, MM, MR, BL, BM, BR);
			if ((TL == "O" || TL == "X") && (TM == "O" || TM == "X") && (TR == "O" || TR == "X") && (ML == "O" || ML == "X") && (MM == "O" || MM == "X") && (MR == "O" || MR == "X") && (BL == "O" || BL == "X") && (BM == "O" || BM == "X") && (BR == "O" || BR == "X"))
			{
				cout << "Looks like it's a tie. Good Try...";
				return "tie";
			}
			srand((unsigned)time(0));
			int random = rand() % 10;
			string randomString = to_string(random);

			if (randomString == TL || randomString == TM || randomString == TR || randomString == ML || randomString == MM || randomString == MR || randomString == BL || randomString == BM || randomString == BR)
			{
				return randomString;
			}
			else
			{
				while (randomString != TL && randomString != TM && randomString != TR && randomString != ML && randomString != MM && randomString != MR && randomString != BL && randomString != BM && randomString != BR)
				{
					srand((unsigned)time(0));
					random = rand() % 10;
					randomString = to_string(random);
				}
				return randomString;
			}
		}

}