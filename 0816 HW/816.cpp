#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node Node;

Node *createList(int *, int);
Node *insertionSort(Node *);
void swap(Node *, Node *);
void printList(Node *); 

int main(){
	
	int arr[] = {90, 12, 56, 2, 11, 1};
	
	Node *first = NULL;
	first = createList(arr, 6);
	cout << "Linked list before sorting " << endl;
	printList(first);
	
	first = insertionSort(first);
	
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

Node *insertionSort(Node *first){
	
	Node *current = first;
	Node *compare = first->next;
	Node *rear = compare;
	
	for (int i = 5; i > 0; i--){
		
		current = first;
			
		if (i == 5){
			if (current->data >= compare->data){
				swap(current, compare);
			}
			compare = compare->next;
			continue;
		}
		if (compare->data <= current->data){
			rear->next = compare->next;
			compare->next = current;
			current = compare;
			first = current;
			compare = rear->next;
			continue;
		}
		if (compare->data >= rear->data){
			rear->next = compare;
			rear = compare;
			compare = compare->next;
			continue;
		}
		while (not(current->data <= compare->data && compare->data <= current->next->data)){
			current = current->next;
		}
		
		rear->next = compare->next;
		compare->next = current->next;
		current->next = compare;
		compare = rear->next;
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

