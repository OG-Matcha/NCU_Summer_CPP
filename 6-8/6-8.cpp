#include <iostream>
#include <cstdlib>

using namespace std;
void func();

int main(){
		
	func();
	func();
	func();
	
    system("pause");
    return 0;
}

void func(){
	static int a = 10;
	cout << "In func(), a = " << a << endl;
	a += 20;
	return; 
}
