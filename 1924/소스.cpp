#include <iostream>
#include <string>
#include <string.h> 
using namespace std;


int main()
{
	int x, y;
	cin >> x >> y;
	if (x == 1 || x == 10)
	{
		if (y % 7 == 1)
			cout << "MON";
		else if (y % 7 == 2)
			cout << "TUE";
		else if (y % 7 == 3)
			cout << "WED";
		else if (y % 7 == 4)
			cout << "TUR";
		else if (y % 7 == 5)
			cout << "FRI";
		else if (y % 7 == 6)
			cout << "SAT";
		else
			cout << "SUN";
	}
	else if (x == 2 || x == 3 || x == 10)
	{
		if (y % 7 == 5)
			cout << "MON";
		else if (y % 7 == 6)
			cout << "TUE";
		else if (y % 7 == 0)
			cout << "WED";
		else if (y % 7 == 1)
			cout << "TUR";
		else if (y % 7 == 2)
			cout << "FRI";
		else if (y % 7 == 3)
			cout << "SAT";
		else
			cout << "SUN";
	}
	else if (x == 4 || x == 7)
	{
		if (y % 7 == 2)
			cout << "MON";
		else if (y % 7 == 3)
			cout << "TUE";
		else if (y % 7 == 4)
			cout << "WED";
		else if (y % 7 == 5)
			cout << "TUR";
		else if (y % 7 == 6)
			cout << "FRI";
		else if (y % 7 == 0)
			cout << "SAT";
		else
			cout << "SUN";
	}
	else if (x == 5)
	{
		if (y % 7 == 0)
			cout << "MON";
		else if (y % 7 == 1)
			cout << "TUE";
		else if (y % 7 == 2)
			cout << "WED";
		else if (y % 7 == 3)
			cout << "TUR";
		else if (y % 7 == 4)
			cout << "FRI";
		else if (y % 7 == 5)
			cout << "SAT";
		else
			cout << "SUN";
	}
	else if (x == 6)
	{
		if (y % 7 == 4)
			cout << "MON";
		else if (y % 7 == 5)
			cout << "TUE";
		else if (y % 7 == 6)
			cout << "WED";
		else if (y % 7 == 0)
			cout << "TUR";
		else if (y % 7 == 1)
			cout << "FRI";
		else if (y % 7 == 2)
			cout << "SAT";
		else
			cout << "SUN";
	}
	else if (x == 8)
	{
		if (y % 7 == 6)
			cout << "MON";
		else if (y % 7 == 0)
			cout << "TUE";
		else if (y % 7 == 1)
			cout << "WED";
		else if (y % 7 == 2)
			cout << "TUR";
		else if (y % 7 == 3)
			cout << "FRI";
		else if (y % 7 == 4)
			cout << "SAT";
		else
			cout << "SUN";
	}
	else if (x == 9 || x == 12)
	{
		if (y % 7 == 3)
			cout << "MON";
		else if (y % 7 == 4)
			cout << "TUE";
		else if (y % 7 == 5)
			cout << "WED";
		else if (y % 7 == 6)
			cout << "TUR";
		else if (y % 7 == 0)
			cout << "FRI";
		else if (y % 7 == 1)
			cout << "SAT";
		else
			cout << "SUN";
	}

}