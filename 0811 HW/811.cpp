#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node Node;

Node *createList(int *, int);
Node *bubbleSort(Node *);
void swap(Node *, Node *);
void printList(Node *); 

int main(){
	
	int arr[] = {90, 12, 56, 2, 11, 1};
	
	Node *first = NULL;
	first = createList(arr, 6);
	cout << "Linked list before sorting " << endl;
	printList(first);
	
	first = bubbleSort(first);
	
	cout << endl;
	cout << "Linked list after sorting " << endl;
	printList(first);
	cout << endl; 
	
    system("pause");
    return 0;
}

Node *createList(int *arr, int len){
	int i;
	Node *first, *current, *previous;
	for(i = 0; i < len; i++){
		current = new Node;
		current->data = arr[i];
		if (i == 0){
			first = current;
		}
		else{
			previous->next = current;
		}
		current->next = NULL;
		previous = current;
	}
	return first;
}

void printList(Node *first){
	Node *tmp = first;
	while (tmp != NULL){
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

Node *bubbleSort(Node *first){
	
	for (int i = 5; i > 0; i--){
		Node *current = first;
		for (int j = 0; j < i; j++){
			swap(current, current->next);
			current = current->next;
		}
	}
	
	return first;
}

void swap(Node *a, Node *b){
	
	if (a->data > b->data){
		Node *tmp;
		tmp->data = a->data;
		a->data = b->data;
		b->data = tmp->data;
	}
}
