#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int a[3] = {5, 7, 9};
	int sum = 0;
	
	for (size_t i = 0; i < 3; i++){
		sum += *(a + i);
	}
	
	cout << "sum = " << sum << endl;

    system("pause");
    return 0;
}
