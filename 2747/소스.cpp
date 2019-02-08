#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
#define MAX_SIZE 5000002
int arr[MAX_SIZE];

int main()
{
	int n;
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < 47; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cin >> n;
	cout << arr[n];
}