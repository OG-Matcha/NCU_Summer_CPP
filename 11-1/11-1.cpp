#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct mydata{
	string name;
	int math;
} student;

int main(){
	
	cout << "Student's name: ";
	getline(cin, student.name);
	cout << "Math score: ";
	cin >> student.math;
	
	cout << "*****Output*****" << endl;
	cout << student.name << "'s Math score is " << student.math << endl;
	
    system("pause");
    return 0;
}
