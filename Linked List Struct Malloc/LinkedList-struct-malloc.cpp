#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
	int data;
	struct node *next;
};

typedef struct node Node;

void freeList(Node *);

int main(){
	
	Node *first;
	Node *middle;
	Node *tail;
	Node *ptr;
	
	first = (Node *)malloc(sizeof(Node)); // new Node;
	middle = (Node *)malloc(sizeof(Node));
	tail = (Node *)malloc(sizeof(Node));
	
	first -> data = 10;
	first -> next = middle;
	middle -> data = 20;
	middle -> next = tail;
	tail -> data = 30;
	tail -> next = NULL;
	
	ptr = first;
	
	while (ptr != NULL){
		cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
	
	cout << endl;
	freeList(first);
	cout << middle -> data << endl;
	
    system("pause");
    return 0;
}

void freeList(Node *first){
	Node *ptr;
	Node *tmp;
	
	ptr = first;
	while (ptr != NULL){
		tmp = ptr;
		ptr = ptr -> next;
		free(tmp); // delete tmp;
	}
	return;
}
