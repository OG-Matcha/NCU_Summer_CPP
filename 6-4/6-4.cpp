#include <iostream>
#include <cstdlib>

using namespace std;

int max(int a, int b);

int main(){
		
	int a = 12, b = 35;
	cout << "a = " << a << " b = " << b << endl;
	cout << "The larger number is " << max(a, b) << endl;
	
    system("pause");
    return 0;
}

int max(int a, int b){
	return a > b ? a : b;
}

/*
int max(int a , int b){
	if (a > b){
		return a;
	}
	else{
		return b;
	}
}
*/
