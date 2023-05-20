#include <iostream>
#include <cstdlib>

using namespace std;

int &max(int&, int&);

int main(){

	int i = 10;
	int j = 20;
	max(i, j) = 100;
	cout << "i = " << i << ", j = " << j << endl;
	
    system("pause");
    return 0;
}

int &max(int& a, int& b){
	return a > b ? a : b;
}
