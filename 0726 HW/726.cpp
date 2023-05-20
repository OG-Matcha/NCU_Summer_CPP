#include <iostream>
#include <cstdlib>

using namespace std;

struct date{
	int year;
	int month;
	int day;
};

int main(){
	
	date holiday = {2004, 4, 26}; // C++ style declaration
	cout << "The holiday is " << holiday.year << "." << holiday.month << "." << holiday.day << endl;
	
	date festival;
	cout << "Please enter the year of festival: ";
	cin >> festival.year;
	cout << "Please enter the month of festival: ";
	cin >> festival.month;
	cout << "Please enter the day of festival: ";
	cin >> festival.day;
	
    system("pause");
    return 0;
}
