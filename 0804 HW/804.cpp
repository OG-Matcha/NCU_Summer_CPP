#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node Node;

Node createQ();
Node addQ(int);
Node deleteQ();
void printList();

Node *Front, *Rear;

int main(){
	
	createQ();
	addQ(5);
	addQ(6);
	addQ(7); 

	printList(); 
	
	deleteQ();
	
	printList();
	
	deleteQ();
	
	printList();
	
	deleteQ();
	
	printList();
	
    system("pause");
    return 0;
}

Node createQ(){
	Front = Rear = (Node *)malloc(sizeof(Node));
	Front -> next = Rear -> next = NULL;
} 

Node addQ(int item){
	Node *newnode;
	newnode = (Node *)malloc(sizeof(Node));
	
	if (Front -> next == NULL){
		Front -> next = newnode;
	}
	
	newnode -> data = item;
	newnode -> next = NULL;
	Rear -> next = newnode;
	Rear = newnode; 
}

Node deleteQ(){
	Node *tmp = Front -> next;
	
	if (tmp -> next == NULL){
		Rear = Front;
	}
	
	Front -> next = tmp -> next;
	delete tmp;
}

void printList(){
	
	if (Front -> next == NULL){
		cout << "The queue is empty" << endl;
		return;
	}
	
	Node *temp;
//	temp -> next = Front -> next; error
	temp = Front -> next;
	
	while (temp != NULL){
//		printf("%3d", tmep -> data);
		cout << temp -> data << " ";
		temp = temp -> next; 
	} 
//	printf("\n");
	cout << endl;
}
