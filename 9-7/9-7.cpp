#include <iostream>
#include <cstdlib>

using namespace std;

void address(int *);

int main()
{

	int a = 12;
	int *ptr = &a;
	// int *ptr;
	// ptr = &a; correct
	// *ptr = &a; error
	address(&a);
	address(ptr);

	system("pause");
	return 0;
}

void address(int *p1)
{
	cout << "���}" << p1 << "���A�x�s���ܼƤ��e��" << *p1 << endl;
	return;
}
