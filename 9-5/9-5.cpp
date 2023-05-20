#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int a = 5;
	int b = 10;
	int *ptr1;
	int *ptr2;
	
	ptr1 = &a; // ptr1 = address of a
	ptr2 = &b; // ptr2 = address of b
	
	*ptr1 = 7; // a = 7
	*ptr2 = 32; // b = 32
	
	a = 17; // *ptr1 = 17
	
	ptr1 = ptr2; // ptr1 = the address of ptr2(b) = 32
	
	*ptr1 = 9; // b = *ptr2 = 9
	ptr1 = &a; // *ptr1 = a = 17
	
	a = 64; // *ptr1 = 64
	
	*ptr2 = *ptr1 + 5; // *ptr2 = b = 64 + 5 = 69
	ptr2 = &a; // ptr2 = address of a
		
	cout << "a = " << a << " b = " << b;
	cout << ", *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
	cout << "ptr1 = " << ptr1 << ", ptr2 = " << ptr2 << endl;
	
    system("pause");
    return 0;
}
