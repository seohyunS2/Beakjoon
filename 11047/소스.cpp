#include <iostream>
using namespace std;
int arr[15];
int main()
{
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int m = 0;//¸ò
	int na = 0;//³ª¸ÓÁö
	int answer = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (k / arr[i] == 0)
			continue;
		else
		{
			m = k / arr[i];
			na = k % arr[i];
			k = na;
			answer += m;
			//cout << m << " m" << na << " na" << endl;
			//cout << answer << " answer" << endl;
			if (k == 0)
				break;
		}
	}
	cout << answer;
}