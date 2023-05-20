#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int arr[5] = {31, 17, 33, 22, 16};
	int *ptr = arr;
	
	for (size_t i = 0; i < 5; i++){
		*(ptr + i) += 10;
	}
	
	for (size_t i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

    system("pause");
    return 0;
}
