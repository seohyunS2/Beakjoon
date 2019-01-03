#include <iostream>
#include <string>
#include <string.h> 
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x, y, i, j;

	if (n % 5 == 0)
		cout << n / 5;

	else
	{
		for (i = n / 5; i > -1; i--)
		{
			x = n - (5 * i);
			//cout << i << "i" << endl << x << "x" << endl;
			for (j = 1; j <= x / 3; j++)
			{
				y = x % (3 * j);
				//cout << j << "j" << endl << y << "y" << endl;
				if (y == 0 && x / (3 * j) == 1)
				{
					cout << i + j;
					return 0;
				}
				
			}
		}
		cout << -1;

	}
}