#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int num, i = 1, sum = 0;
	cout << "�п�J��ƭ�: ";
	cin >> num;

	while (i <= num)
	{
		sum += i;
		i++;
	}
	cout << "1+2+..+" << num << " = " << sum << endl;

	system("pause");
	return 0;
}
