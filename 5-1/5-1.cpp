#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int num = 41;

	if (num % 3 == 0 && num % 7 == 0)
	{
		cout << num << "�i�H�Q3�P7�㰣" << endl;
	}
	else
	{
		cout << num << "����Q3�P7�㰣" << endl;
	}

	system("pause");
	return 0;
}
