#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, i = 1, sum = 0;

	do
	{
		cout << "請輸入欲累加的最大奇數值: ";
		cin >> n;
	} while (n < 1 || n % 2 == 0);

	do
	{
		sum += i;
		i += 2;
	} while (i <= n);

	cout << "1+3+5+...+" << n << " = " << sum << endl;

	system("pause");
	return 0;
}
