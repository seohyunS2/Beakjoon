#include <iostream>
#include <string>
#include <string.h> 
using namespace std;

int arr[200000];

int main()
{
	int num = 0;
	int z = 0;
	while (1)
	{
		int answer = 0;
		int n;
		cin >> n;
		num++;

		if (n == 0)
		{
			for (int i = 0; i < num - 1; i++)
				cout << arr[i] << endl;
			break;
		}

		else if (n == 1 || n == 2 || n == 3 || n == 5)
		{
			arr[z] = 1;
		}

		else if (n == 7)
		{
			arr[z] = 2;
		}

		else
		{
			for (int i = n + 1; i <= 2 * n; i++)
			{
				if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
					answer++;
					cout << i << " " << "나는 서로소얌" << endl;
				}
			}
			arr[z] = answer;
		}
		z++;
	}

}