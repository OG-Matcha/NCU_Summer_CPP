#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	 
	int sum = 0;
	int i = 10;
	for (int i = 1; i <= 5; i++){
		sum += i;
		cout << "i = " << i << ", sum = " << sum << endl;
	}
	
    system("pause");
    return 0;
}
