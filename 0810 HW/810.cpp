#include <iostream>
#include <cstdlib>

using namespace std;

struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};

typedef struct tree treenode;
typedef treenode *btree;

btree create_btree(int *, int);
btree insert_node(btree, int);
void print_btree(btree);
void search_btree(btree, int);

int main()
{
	btree root = NULL;

	int data[9] = {5, 6, 4, 8, 2, 3, 7, 1, 9};
	root = create_btree(data, 9);

	cout << "·j´Mµ²ªG: " << endl;
	search_btree(root, 7);

	system("pause");
	return 0;
}

btree create_btree(int *data, int len)
{
	btree root = NULL;
	int i;

	for (i = 0; i < len; i++)
	{
		root = insert_node(root, data[i]);
	}
	return root;
}

btree insert_node(btree root, int value)
{
	btree newnode;
	btree current;
	btree back;

	newnode = (btree)malloc(sizeof(treenode));
	newnode->data = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (root == NULL)
	{
		return newnode;
	}
	else
	{
		current = root;
		while (current != NULL)
		{
			back = current;
			if (current->data < value)
			{
				current = current->right;
			}
			else
			{
				current = current->left;
			}
		}
		if (back->data < value)
		{
			back->right = newnode;
		}
		else
		{
			back->left = newnode;
		}
	}
	return root;
}

void print_btree(btree root)
{
	btree ptr;
	ptr = root->left;
	printf("¦C¦L¥ª¤l¾ğ: \n");
	while (ptr != NULL)
	{
		printf("[%2d]\n", ptr->data);
		ptr = ptr->left;
	}
	ptr = root->right;
	printf("¦C¦L¥k¤l¾ğ: \n");
	while (ptr != NULL)
	{
		printf("[%2d]\n", ptr->data);
		ptr = ptr->right;
	}
}

void search_btree(btree root, int data)
{
	btree current = root;

	while (true)
	{
		if (current->data == data)
		{
			cout << current->data << endl;
			return;
		}
		else if (current->data < data)
		{
			if (current->right)
			{
				cout << current->data << " ";
				current = current->right;
			}
			else
			{
				cout << "The node didn't found" << endl;
				return;
			}
		}
		else if (current->data > data)
		{
			if (current)
			{
				cout << current->data << " ";
				current = current->left;
			}
			else
			{
				cout << "The node didn't found" << endl;
				return;
			}
		}
	}
}
