#include <iostream>
#include <cstdlib>

using namespace std;

void replace(int *, int, int);

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int num = 100;

	cout << "�m���e�A�}�C�����e�� ";

	for (size_t i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	replace(a, 4, num);

	cout << "�m����A�}�C�����e�� ";

	for (size_t i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}

void replace(int *a, int b, int c)
{
	*(a + b - 1) = c;
	return;
}
