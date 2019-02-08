#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_SIZE 5000002
int arr[MAX_SIZE];

int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);

	cout << arr[k - 1];
}