#include <iostream>


using namespace std;

int main()
{
	srand(time(NULL));

		int Array[10] = { 0, };

	for (int i = 0; i < 10; ++i)
	{
		Array[i] = (rand()% 10 + 1);
		for (int j = 0; j < i; ++j)
		{
			if (Array[i] == Array[j])
			{
				i--;
				break;
			}
		}

	}
	for (int i = 0; i < 10; ++i)
	{
		cout << Array[i] << endl;
	}

	return 0;
}