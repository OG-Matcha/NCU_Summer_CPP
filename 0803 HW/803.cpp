#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node Node;

Node *creates();
Node *addstack(Node *, int);
Node *deletestack(Node *);
void printList(Node *);
bool isempty(Node *); // check is the stack is empty

int main(){
	
	Node *sTop;
	sTop = creates();
	sTop = addstack(sTop, 5); 
	sTop = addstack(sTop, 6); 
	sTop = addstack(sTop, 8); 
	sTop = addstack(sTop, 10); 
	
	printList(sTop);
	
	sTop = deletestack(sTop); 
	sTop = deletestack(sTop); 
	
	printList(sTop); 
	
    system("pause");
    return 0;
}

Node *creates(){
	return NULL;
} 

Node *addstack(Node *Top, int item){
	Node *newnode;
	newnode = (Node *)malloc(sizeof(Node));
	newnode -> data = item;
	newnode -> next = Top;
	Top = newnode;
	return Top;
}

Node *deletestack(Node *Top){
	if (isempty(Top)){							// set condition
		cout << "The stack is empty" << endl;
		return Top;
	}
	Node *tmp = Top;
	Top = Top -> next;
	delete tmp;
	return Top;
}

void printList(Node *sTop){
	if (isempty(sTop)){							// set condition
		cout << "The stack is empty" << endl;
		return;
	}
	
	Node *ptr = sTop;
	
	while (ptr != NULL){
		printf("%3d", ptr -> data);
		ptr = ptr -> next;
	}
	printf("\n");
}

bool isempty(Node *Top){
	return not Top; // if Top is not NULL, the stack is not empty
}
