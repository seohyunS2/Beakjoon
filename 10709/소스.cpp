#include <iostream>
using namespace std;

int main()
{
	int h, w;
	cin >> h;
	cin >> w;

	int arr[101][101] = { 0, };

	for (int i = 0; i < h; i++)
	{
		char first;
		cin >> first;
		if (first == 'c')
			arr[i][0] = 0;
		else
			arr[i][0] = -1;

		for (int j = 1; j < w; j++)
		{
			char c;
			cin >> c;
			if (c == 'c')
			{
				arr[i][j] = 0;
			}//구름있으면 0

			else//구름 없으면
			{
				if (arr[i][j - 1] == 0)
				{
					arr[i][j]++;
				}//전에 구름 있으면 0

				else if (arr[i][j - 1] == -1)
				{
					arr[i][j] = -1;
				}
				else if (arr[i][j - 1] != 0 && arr[i][j - 1] != -1)
				{
					arr[i][j] = arr[i][j - 1] + 1;
				}
				else
					arr[i][j] = -1;
			}

		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}