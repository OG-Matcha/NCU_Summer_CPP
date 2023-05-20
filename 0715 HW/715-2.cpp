#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int length = 3000;
	int day = 0;

	while (length >= 5)
	{
		length /= 2;
		day++;
	}

	cout << "¦@»Ý" << day << "¤Ñ" << endl;

	system("pause");
	return 0;
}
