#include <iostream>
#include <string>
using namespace std;

char arr[6][16];


int main()
{
	string s;
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] == NULL)
				continue;
			else
				cout << arr[j][i];
		}

	}
}


