#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	int sum = m;
	int max = m;
	int zero = 1;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		sum = sum + a - b;
		cout << sum << endl;
		if (max < sum)
			max = sum;
		else if (sum = 0)
			zero = 0;
		cout << max << "ÃÖ´ñ°ª" << endl;
		cout << zero << "0" << endl;
		//cout << sum << endl;
		
	}
	if (zero ==0)
		cout << 0;
	else
		cout << max;
}