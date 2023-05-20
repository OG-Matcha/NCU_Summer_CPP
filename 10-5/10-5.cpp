#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int *a = new int;
	*a = 5;
	
	cout << "*a = " << *a << endl;
	cout << *a << " * " << *a << " = " << (*a) * (*a) << endl;
	//delete a;
	cout << "*a = " << *a << endl; //  if without value, it will print the address it point to (junk data)
	cout << "a = " << a << endl;
	a = NULL;
	
    system("pause");
    return 0;
}
