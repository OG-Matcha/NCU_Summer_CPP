#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct mydata{
	string name;
	int math;
	int eng;
};

double avg(int, int);

int main(){
	
	struct mydata num = {"Alice", 71, 80};
	cout << num.name << "'s Math score = " << num.math << endl;
	cout << "English score = " << num.eng << endl;
	cout << "average = " << avg(num.math, num.eng) << endl;
	
    system("pause");
    return 0;
}

double avg(int a, int b){
	return (double)(a + b) / 2;
}
