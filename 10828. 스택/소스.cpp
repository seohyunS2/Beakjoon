#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[50000];
int top = -1;

void push(int data)
{
	stack[++top] = data;
}

int pop()
{
	if (top != -1) return stack[top--];
	else return -1;
}

int size()
{
	return (top + 1);
}

int empty()
{
	if (top == -1) return 1;
	else return 0;
}

int topp()
{
	if (top != -1) return stack[top];
	else return -1;
}

int main()
{
	int n;
	scanf("%d", &n);

	char od[10];
	int data;

	for (int i = 0; i < n; i++)
	{
		scanf("%s", od);
		if (strcmp(od, "push") == 0)
		{
			scanf("%d", &data);
			push(data);

		}
		else if (strcmp(od, "pop") == 0)
		{
			printf("%d\n", pop());
		}
		else if (strcmp(od, "size") == 0)
		{
			printf("%d\n", size());
		}
		else if (strcmp(od, "empty") == 0)
		{
			printf("%d\n", empty());
		}
		else
		{
			printf("%d\n", topp());
		}

	}
}