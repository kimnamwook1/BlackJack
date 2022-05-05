#include "Draw.h"

using namespace std;

void Draw()
{
	cout << "Player" << '\t' << "  Dealer" << endl;
	for (int i = 0; i < 4; ++i)
	{
		int Type = SplitCard[i] / 13;
		int Number = SplitCard[i] % 13;

		switch (Type)
		{
		case 0:
			cout << "¢¼";
			break;
		case 1:
			cout << "¢À";
			break;
		case 2:
			cout << "¢¾";
			break;
		case 3:
			cout << "¡ß";
			break;
		}

		switch (Number)
		{
		case 12:
			cout << "K" << " ";
			break;
		case 11:
			cout << "Q" << " ";
			break;
		case 10:
			cout << "J" << " ";
			break;
		case 0:
			cout << "A" << " ";
			break;
		default:
			cout << Number + 1 << " ";
			break;
		}

		cout << ((i % 2 == 0) ? '\t' : '\n');
	}

	if (Player[0] + Player[1] < Dealer[0] + Dealer[1])
	{
		cout << "Dealer win" << endl;
	}
	else if (Player[0] + Player[1] > Dealer[0] + Dealer[1])
	{
		cout << "Player win" << endl;
	}
	else
	{
		cout << "Draw" << endl;
	}

}