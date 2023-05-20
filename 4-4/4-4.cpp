#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i;
	cout << "Input an integer: ";
	cin >> i;

	if (i > 5)
	{
		cout << i << ">5成立" << endl;
	}
	if (i % 2 == 0)
	{
		cout << i << "為偶數" << endl;
	}
	if (true)
	{
		cout << "此行永遠會被執行" << endl;
	}

	system("pause");
	return 0;
}
