#include <iostream>
#include <cstdlib>

using namespace std;

int fact(int);

int main(){
		
	int a;
	
	do{
		cout << "Input an integer: ";
		cin >> a;
	} while (a <= 0);
	
	cout << "1 * 2 * 3 * ..." << " = " << fact(a) << endl;
 
    system("pause");
    return 0;
}

int fact(int a){
	return a > 0 ? a * fact(a - 1) : 1;
}

/*
int fact(int a){
	if (a > 0) {
		return a  * fact(a - 1);
	}
	else{
		return 1;
	}
}
*/
