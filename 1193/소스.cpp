#include<iostream>
#include<algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	double cal = (1 + sqrt(1 + 8 * n)) / 2;
	int num;
	//cout << cal << "cal" << endl;

	if (cal - (int)cal == 0)
	{
		num = cal - 1;
		if (num % 2 == 0)//Â¦¼ö
			cout << num << "/" << 1;
		else
			cout << 1 << "/" << num;
	}
	else
	{
		num = cal + 1;
		int want = (pow(num * 2 - 1, 2) - 1) / 8;
		int sub = want - n;
		if ((int)cal % 2 == 0)
			cout << (int)cal - sub << "/" << 1 + sub;
		else
			cout << 1 + sub << "/" << (int)cal - sub;

	}

	

}

