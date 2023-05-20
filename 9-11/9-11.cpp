#include <iostream>
#include <cstdlib>

using namespace std;

int *max(int *, int *);

int main(){
	
	int a = 12;
	int b = 17;
	int *ptr = max(&a, &b);
	
	cout << "max = " << *ptr << endl;

    system("pause");
    return 0;
}

int *max(int *a, int *b){
	return *a > *b ? a : b;
}
