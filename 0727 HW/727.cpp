#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node;

void add(Node *, Node *);

int main()
{

	Node a, b, c;
	Node *ptr = &a;

	a.data = 12;
	a.next = &b;
	b.data = 30;
	b.next = &c;
	c.data = 64;
	c.next = NULL;

	while (ptr != NULL)
	{
		cout << "address = " << ptr << " ";
		cout << "data = " << ptr->data << " ";
		cout << "next = " << ptr->next << endl;
		ptr = ptr->next;
	}

	Node d;
	d.data = 24;

	Node *ptr1 = &a;
	add(&c, &d);

	cout << "執行結果為: " << endl;

	while (ptr1 != NULL)
	{
		cout << "address = " << ptr1 << " ";
		cout << "data = " << ptr1->data << " ";
		cout << "next = " << ptr1->next << endl;
		ptr1 = ptr1->next;
	}

	system("pause");
	return 0;
}

void add(Node *p1, Node *p2)
{
	p1->next = p2;
	p2->next = NULL;
	return;
}
