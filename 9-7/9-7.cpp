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
	cout << "於位址" << p1 << "內，儲存的變數內容為" << *p1 << endl;
	return;
}
