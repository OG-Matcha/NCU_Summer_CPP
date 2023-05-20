#include <iostream>
#include <cstdlib>

using namespace std;

int sum2(int);

int main(){
		
	cout << "Test input 4: " << sum2(4) << endl; 
	
    system("pause");
    return 0;
}

int sum2(int a){
	return a > 1 ? sum2(a - 1) + 2 * a : 2;
}
