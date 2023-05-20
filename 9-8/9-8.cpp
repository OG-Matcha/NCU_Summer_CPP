#include <iostream>
#include <cstdlib>

using namespace std;

void add10(int *);

int main()
{

	int a = 5;

	cout << "呼叫 add10()之前， a = " << a << endl;
	add10(&a);
	cout << "呼叫 add10()之後， a = " << a << endl;

	system("pause");
	return 0;
}

void add10(int *p1)
{
	*p1 += 10;
	return;
}
