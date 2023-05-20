#include <iostream>
#include <cstdlib>

using namespace std;


int main(){

	int A[] = {48, 75, 30, 17, 62};
	int i = A[0];
	int max = A[0];
	int min = A[0];
	int length = sizeof(A) / sizeof(A[0]);
	
	cout << "elements in array A are: ";
	
	for (i = 0; i < length; i++){
		cout << A[i] << " ";
		
		max = A[i] > max ? A[i] : max;
		min = A[i] < min ? A[i] : min;

	}
	
	cout << endl << "Maximum is " << max;
	cout << endl << "Minimum is " << min << endl;
	
    system("pause");
    return 0;
}

