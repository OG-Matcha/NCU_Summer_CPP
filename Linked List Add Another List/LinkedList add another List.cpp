#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
	int data;
	struct node *next;
};

typedef struct node Node;

Node *createList(int *, int);
void printList(Node *);
void freeList(Node *);
Node *add(Node *, int *, int);

int main(){
	
	Node *first;
	int arr[] = {14, 27, 32, 46};
	int arr2[] = {80, 60, 50};
	first = createList(arr, 4);
	printList(first);
	
	add(first, arr2, 3);
	printList(first);
	
	freeList(first);
	
    system("pause");
    return 0;
}

Node *createList(int *arr, int len){
	
	int i;
	Node *first, *current, *previous;
	
	for (i = 0; i < len; i++){
		current = (Node *)malloc(sizeof(Node)); // new Node;
		current -> data = arr[i];
		
		if (i == 0){
			first = current;
		}
		else{
			previous -> next = current;
		}
		current -> next = NULL;
		previous = current; 
	}
	return first;
}

void printList(Node *first){
	
	Node *ptr = first;
	if (first == NULL){
		printf("List is empty\n"); // cout << "List is empty\n";
	}
	else{
		while (ptr != NULL){
			cout << ptr -> data << " ";
			ptr = ptr -> next;
		}	
		cout << endl;	
	}
	
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

Node *add(Node *first, int *arr2, int len){
	
	Node *ptr, *current, *previous;
	ptr = first;
	
	while (ptr != NULL){
//		cout << ptr -> data >> endl;
		previous = ptr;
		ptr = ptr -> next;
//		cout << previous -> data << endl;
	}
//	cout << ptr -> data;
//	cout << previous -> data;
	
	for (int i = 0; i < len; i++){
		current = (Node *)malloc(sizeof(Node));
		current -> data = arr2[i];
		
		if (i == 0){
			previous -> next = current;
		}
		else{
			previous -> next = current;
		}
		current -> next = NULL;
		previous = current;
		}
	return first;
	}
