#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct mydata{
	string name;
	int age;
};

void func(struct mydata);

int main(){
	
	struct mydata woman = {"Mary Wu", 5};
	cout << "before process..." << endl;
	cout << "In main(), " << woman.name;
	cout << "'s age is " << woman.age << endl;
	cout << "after process..." << endl;
	func(woman);
	cout << "In main(), " << woman.name;
	cout << "'s age is " << woman.age << endl; 
	
    system("pause");
    return 0;
}

void func(struct mydata a){
	a.age += 10;
	cout << "In func(), " << a.name;
	cout << "'s age is " << a.age << endl;
	return;
}
