#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int *a = new int[5];
	
	for (size_t i = 0; i < 5; i++){
		a[i] = i * 2;
	}
	
	for (size_t i = 0; i < 5; i++){
		cout << "a[" << i << "] = " << a[i] << "\t";
	}
	cout << endl;
	
	delete[] a;
	a = NULL;
	
    system("pause");
    return 0;
}
