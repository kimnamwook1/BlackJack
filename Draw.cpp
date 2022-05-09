#include "Draw.h"
#include "Common.h"

using namespace std;

int PlayerSum = 0;
int DealerSum = 0;
int Deck[52] = { 0, };

void Draw()
{
	cout << "Player" << '\t' << "  Dealer" << endl;
	for (int i = 0; i < 6; ++i)
	{
		int Number = SplitCard[i] % 13;

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
	for (int j = 0; j < 6; ++j)
	{
		Deck[j] = SplitCard[j] % 13 + 1;
	}

	int Player[3] = { 0, };
	int Dealer[3] = { 0, };
	for (int i = 0; i < 3; i++)
	{
		Player[i] = Deck[i * 2];
		Dealer[i] = Deck[i * 2 + 1];
	}

	for (int k = 0; k < 3; k++)
	{
		PlayerSum += (Player[k] > 10) ? 10 : Player[k];
		DealerSum += (Dealer[k] > 10) ? 10 : Dealer[k];

	}
	cout << PlayerSum << ":" << DealerSum << endl;

	if (DealerSum > 21)

		cout << "Player Win" << endl;

	else if (PlayerSum < 21 && DealerSum < 21)

		if (PlayerSum > DealerSum)

			cout << "Player Win" << endl;

		else if (PlayerSum == DealerSum)

			cout << "Pealer Win" << endl;

		else
			cout << "Dealer Win" << endl;
	else

		cout << "Player Win" << endl;



}
