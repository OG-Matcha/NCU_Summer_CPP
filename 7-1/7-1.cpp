#include <iostream>
#include <cstdlib>

using namespace std;

void add10(int, int);

int main(){
		
	int a = 20;
	int b = 50;
	
	cout << "before calling add10(): ";
	cout << "a = " << a << ", b = " << b << endl;
	add10(a, b);
	cout << "after calling add10(): ";
	cout << "a = " << a << ", b = " << b << endl;
	
    system("pause");
    return 0;
}

void add10(int a, int b){
	a += 10;
	b += 10;
	return;
}
