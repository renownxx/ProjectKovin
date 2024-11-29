#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	unsigned int mask = 1 << 7 | 1;
	unsigned int mask1 = 1 << 2 | 1 << 1 | 1;

	for (int i = 0; i < 6; i++)
	{
		unsigned int p = mask | mask1;
		cout << p << endl;
		mask1 = mask1 << 1;
	}
}