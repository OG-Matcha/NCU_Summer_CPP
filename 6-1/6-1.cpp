#include <iostream>
#include <cstdlib>

using namespace std;

void star();

int main(){
	
	star();
	cout << "6 * 6 = " << 6 * 6 << endl;
	star();
	
    system("pause");
    return 0;
}

void star(){
	int j;
	for (j = 1; j <= 8; j++){
		cout << "*";
	}
	cout << endl;
	return;
}
