#include <iostream>
#include <cstdlib>

using namespace std;

void swap(int *, int *);

int main()
{
	int a = 5;
	int b = 20;

	cout << "�洫�e... a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "�洫��... a = " << a << ", b = " << b << endl;

	system("pause");
	return 0;
}

void swap(int *a, int *b)
{
	int *tmp = a;
	a = b;
	b = tmp;
	return;
}
