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
//Node *deletestack(Node *);
void printList(Node *);

int main(){
	
	Node *sTop;
	sTop = creates();
	sTop = addstack(sTop, 5); 
	sTop = addstack(sTop, 6); 
	sTop = addstack(sTop, 8); 
	sTop = addstack(sTop, 10); 
	
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

}

void printList(Node *sTop){
	Node *ptr = sTop;
	
	while (ptr != NULL){
		printf("%3d", ptr -> data);
		ptr = ptr -> next;
	}
	printf("\n");
}
