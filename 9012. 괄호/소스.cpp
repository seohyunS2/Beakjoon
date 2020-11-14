#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char c) { stack[++top] = c; }
void pop() { top--; }


int ex(char in[100], int n)
{
	printf("%s %d \n", in,n);
	for (int i = 0; i < n; i++)
	{
		if (in[i] == '(') push('(');
		else
		{
			if (top == -1) return 0;
			else pop();
		}
	}
	printf("top %d \n", top);
	if (top != -1) return 0;
	else return 1;
}

int main()
{
	int n;
	char in[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", in);
		int ans = ex(in, strlen(in));
		if (ans == 1) printf("YES\n");
		else printf("NO\n");
		top = -1;
	}

}