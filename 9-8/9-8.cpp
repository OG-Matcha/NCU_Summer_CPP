#include <iostream>
#include <cstdlib>

using namespace std;

void add10(int *);

int main()
{

	int a = 5;

	cout << "�I�s add10()���e�A a = " << a << endl;
	add10(&a);
	cout << "�I�s add10()����A a = " << a << endl;

	system("pause");
	return 0;
}

void add10(int *p1)
{
	*p1 += 10;
	return;
}
