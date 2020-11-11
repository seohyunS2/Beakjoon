#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

static int n;
bool arr[200][200] = { false, };
vector <int> dir;

;//방향 지시 배열 
// 0 : 1
// 1 : 2
// 2 : 3
// 3 : 4

void make_dir(int x, int y, int d, int g)//g 세대 만들기
{
	int gen = 0;

	dir.push_back(d);

	int size;

	while (gen != g)
	{
		gen++;
		size = dir.size();
		int index = size - 1;//마지막의 다음을 가르킴
		
		for (int i = 0; i < size; i++)
		{
			if (dir[index]==3)  dir.push_back(0);
			else dir.push_back(dir[index] + 1); 

			index--;
		}
		
	}
}

void make_array(int x, int y)//배열에 g세대 표시
{
	arr[y][x] = true;
	int cx = y;
	int cy = x;

	int size = dir.size();
	for (vector<int>::iterator iter = dir.begin(); iter != dir.end(); iter++)
	{
		if ((*iter) == 0)
		{
			cy++;
			arr[cx][cy] = true;
		}
		else if ((*iter) == 1)
		{
			cx--;
			arr[cx][cy] = true;
		}
		else if ((*iter) == 2)
		{
			cy--;
			arr[cx][cy] = true;
		}
		else
		{
			cx++;
			arr[cx][cy] = true;
		}
	}
}

int answer()
{
	int ans = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == true && arr[i + 1][j] == true && arr[i][j + 1] == true && arr[i + 1][j + 1] == true) ans++;
		}
	}
	return ans;
}

int main()
{
	cin >> n;
	int x, y, d, g;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> d >> g;
		make_dir(x, y, d, g);
		make_array(x,y);
		dir.clear();
	}
	cout << answer() << endl;
}