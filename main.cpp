#include <iostream>
#include "Common.h"
#include "Initialize.h"
#include "Shuffle.h"
#include "Split.h"
#include "Draw.h"

using namespace std;

int main(void)
{
	Initialize();

	Shuffle();

	Split();

	Draw();

	cout << "HelloWorld" << endl;

	return 0;

}







