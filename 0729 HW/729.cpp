#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
	int data;
	struct node *next;
};

typedef struct node Node;

void freeList(Node *);
void add(Node *, int);
void printlist(Node *);

int main(){
	
	int a = 25;
	
	Node *first;
	Node *second;
	Node *third;
	Node *tail;
	Node *ptr;
	
	first = (Node *)malloc(sizeof(Node));
	second = (Node *)malloc(sizeof(Node));
	third = (Node *)malloc(sizeof(Node));
	tail = (Node *)malloc(sizeof(Node));
	
	first -> data = 10;
	first -> next = second;
	second -> data = 20;
	second -> next = third;
	third -> data = 30;
	third -> next = tail;
	tail -> data = 40;
	tail -> next = NULL;
	
	cout << endl;
	
	printlist(first);
	
	add(first, a);

	cout << "after process..." << endl;
	
	printlist(first);
	
	freeList(first);
	
    system("pause");
    return 0;
}

void add(Node *first, int a){
	
	Node *ptr = first;
	Node *goal = new Node;
	goal -> data = a;
	
	while (not((ptr -> data) <= (goal -> data) && (goal -> data) <= (ptr -> next -> data))){
		ptr = ptr -> next;
	}
	
	goal -> next = ptr -> next;
	ptr -> next = goal;
	
	return;
} 

void printlist(Node *node){
	
	Node *ptr = node;
	
	while (ptr != NULL){
		cout << ptr -> data << " ";
		ptr = ptr -> next;
	}
	cout << endl;
	return;
}

void freeList(Node *first){
	Node *ptr;
	Node *tmp;
	
	ptr = first;
	while (ptr != NULL){
		tmp = ptr;
		ptr = ptr -> next;
		free(tmp);
	}
	return;
}
