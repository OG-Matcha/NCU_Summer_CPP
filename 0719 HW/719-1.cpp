#include <iostream>
#include <cstdlib>

using namespace std;

double rpower(double, int);

int main(){
	
	cout << rpower(2.0, 3) << endl;
	
    system("pause");
    return 0;
}

double rpower(double a, int b){
	
	return b > 0 ? a * rpower(a, b - 1) : 1;
}

/*
double rpower(double a, int b){
	
	if (b == 0){
		return 1;
	}
	else{
		return a * rpower(a, b - 1);
	}
}
*/
