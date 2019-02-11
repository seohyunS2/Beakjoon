#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
#define MAX_SIZE 1002
int arr[MAX_SIZE];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);

	int answer = 0;
	int j = 0;
	int num = n;//°íÁ¤
	for (int i = arr[j]; j < num; j++)
	{
		answer += arr[j] * n;
		n--;
	}
	printf("%d ", answer);
}