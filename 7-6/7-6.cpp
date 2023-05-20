#include <iostream>
#include <cstdlib>

using namespace std;

int add(int, int);
double add(double, double);


int main(){

	int a = 10;
	int b = 20;
	double x = 2.3;
	double y = 3.5;
	
	cout << a << " + " << b << " = " << add(a, b) << endl;
	cout << x << " + " << y << " = " << add(x, y) << endl;
	
    system("pause");
    return 0;
}

int add(int a, int b){
	return a + b;
} 

double add(double a, double b){
	return a + b;
}
