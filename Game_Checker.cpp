#include <iostream>
using namespace std;

class Game_Checker
{
	public:
		Game_Checker()
		{

		}
		bool CheckForGameOver(string TL, string TM, string TR, string ML, string MM, string MR, string BL, string BM, string BR)
		{
			if (TL == TM && TL == TR)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (ML == MM && ML == MR)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (BL == BM && BL == BR)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (TL == ML && TL == BL)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (TM == MM && TM == BM)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (TR == MR && TR == BR)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (TL == MM && TL == BR)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			if (BL == MM && BL == TR)
			{
				if (TL == "X")
				{
					cout << "\n YOU WIN! \n ";
				}
				else
				{
					cout << "\n You Lose :( \n ";
				}
				return true;
			}
			else
			{
				return false;
			}
		}
};