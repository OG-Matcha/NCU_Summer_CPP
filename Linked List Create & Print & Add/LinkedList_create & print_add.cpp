#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node;

Node *createList(int *, int);
void printList(Node *);
void freeList(Node *);
Node *insert(Node *, int);

int main()
{

	Node *first;
	int arr[] = {14, 27, 32, 46};
	first = createList(arr, 4);
	printList(first);

	int data = 36;
	first = insert(first, data);
	cout << "after insert...";
	printList(first);

	system("pause");
	return 0;
}

Node *createList(int *arr, int len)
{

	int i;
	Node *first, *current, *previous;

	for (i = 0; i < len; i++)
	{
		current = (Node *)malloc(sizeof(Node)); // new Node;
		current->data = arr[i];

		if (i == 0)
		{
			first = current;
		}
		else
		{
			previous->next = current;
		}
		current->next = NULL;
		previous = current;
	}
	return first;
}

void printList(Node *first)
{

	Node *ptr = first;
	if (first == NULL)
	{
		printf("List is empty\n"); // cout << "List is empty\n";
	}
	else
	{
		while (ptr != NULL)
		{
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}

	return;
}

void freeList(Node *first)
{
	Node *ptr;
	Node *tmp;

	ptr = first;

	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}

	return;
}

Node *insert(Node *first, int data)
{

	Node *current, *previous, *goal;

	goal = new Node;
	goal->data = data;

	previous = first;
	current = first->next;

	while (not((previous->data <= goal->data) && (goal->data <= current->data)))
	{
		previous = previous->next;
		current = current->next;
	}

	previous->next = goal;
	goal->next = current;

	return first;
}
