#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char ans[200000];
int ans_index = -1;
int stack[200000];
int top = 0;

int push_num = 1;

void pop()
{
	top--;
	ans[++ans_index] = '-';
}

void push(int num)
{
	for (; push_num <= num; push_num++) {
		stack[++top] = push_num;
		ans[++ans_index] = '+';
	}
	pop();
}



void main()
{
	int n, data;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		if (stack[top] < data) push(data);
		else if (stack[top] == data) pop();
		else {
			printf("NO\n");
			return;
		}
	}
	for (int i = 0; i <= ans_index; i++)
		printf("%c\n", ans[i]);
}