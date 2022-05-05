#include "Split.h"

void Split()
{
	for (int i = 0; i < 24; ++i)
	{
		SplitCard[i] = A[i];

		for (int j = 0; j < 11; ++j)
		{
			for (int k = 0; k < 11; k = k + 2)
			{
				Player[j] = SplitCard[k];
				Dealer[j] = SplitCard[k + 1];
			}
		}
	}
}