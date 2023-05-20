#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct data{
	string name;
	int math;
}; 

int main(){

	struct data student[2];
	
	for (size_t i = 0; i < 2; i++){
		cout << "Student's name: ";
		// getline(cin, student[i].name);
		cin >> student[i].name;
		cout << "Math score: ";
		cin >> student[i].math;
		cout << endl;
	}
	cout << "*****Output*****" << endl;
	
	for (size_t i = 0; i < 2; i++){
		cout << student[i].name << "'s Math score is " << student[i].math << endl;
	}	

    system("pause");
    return 0;
}
