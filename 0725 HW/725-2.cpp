#include <iostream>
#include <cstdlib>

using namespace std;

void square(int *);

int main(){
	
	int arr[5] = {31, 17, 33, 22, 16};
	
	square(arr);
	
	for (size_t i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
    system("pause");
    return 0;
}

void square(int *arr){
	for (size_t i = 0; i < 5; i++){
		*(arr + i) *= *(arr + i);
	}
	return;
}
