#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int data1;
	int data2;
	struct ListNode *llink;
	struct ListNode *rlink;
}ListNode;

static int n;
ListNode *head = NULL;
ListNode *cur;

ListNode *create(int data1,int data2, ListNode *llink, ListNode *rlink)
{
	ListNode *new_node;
	new_node = (ListNode*)malloc(sizeof(ListNode));
	new_node->data1 = data1;
	new_node->data2 = data2;
	new_node->llink = llink;
	new_node->rlink = rlink;
	return (new_node);
}

void insert(ListNode *new_node)
{
	if (head == NULL)
	{
		new_node->llink = new_node;
		new_node->rlink = new_node;
		head = new_node;
		cur = head;
		return;
	}
	new_node->llink = cur;
	new_node->rlink = head;
	cur->rlink = new_node;
	head->llink = new_node;

	cur = cur->rlink;
}

void boom(int len)
{
	while (len!=0) 
	{
		ListNode *removed = head;
		int hd = head->data1;//remember head data
		printf("%d ", removed->data2);

		// move side direction
		if (hd > 0)head = head->rlink;
		else head = head->llink;

		removed->llink->rlink = removed->rlink;
		removed->rlink->llink = removed->llink;
		free(removed);

		for (int i = 1; i <abs(hd); i++)
		{
			if (hd > 0) head = head->rlink;
			else head = head->llink;
		}
		len--;
	}
	
}


int main()
{

	scanf("%d", &n);

	int data;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		insert(create(data, i + 1, NULL, NULL));
	}

	boom(n);
	
}
