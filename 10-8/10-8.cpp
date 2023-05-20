#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int a = 10;
	int& ref = a;
	
	int b = 15;
	int *ptr = &b;
	
	cout << a << " + " << b << " = ";
	cout << ref + *ptr << endl;
	
    system("pause");
    return 0;
}
