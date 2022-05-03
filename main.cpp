#include <iostream>

using namespace std;

int main()
{
	int Number = 0;
	cin >> Number;

	for (int i = 1; i < 10; i++)
	{
		cout << Number << "x" << i << "=" << Number * i; 
		cout << '\n' << endl;
	}
		return 0;
}