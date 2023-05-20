#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data; // data member
	struct node *next; // linked member, store the pointer of next node
};
	// no need to know // typedef struct node Node; // define "struct node" to type Node
	
int main(){
	
	// no need to know // Node a, b, c; // declare a, b, c to type Node variables
	// no need to know // Node *ptr = &a; // declare ptr and point it to node a
	
	node a, b, c;
	struct node *ptr = &a;
	
	a.data = 12; // set node a's data to 12
	a.next = &b; // set node a's next member to next node b
	b.data = 30;
	b.next = &c;
	c.data = 64;
	c.next = NULL; // set next member of c to NULL

	while (ptr != NULL){							// when ptr not equal to NULL, do the follow
		cout << "address = " << ptr << " ";			// print the address of the node
		cout << "data = " << ptr -> data << " ";	// print the data of the node
		cout << "next = " << ptr -> next << endl;	// print the next of the node
		ptr = ptr -> next; 							// point ptr to next node
	}
	
    system("pause");
    return 0;
}
