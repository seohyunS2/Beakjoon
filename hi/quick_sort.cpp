#include <iostream>
#include <fstream>
#include<string>
#include <sstream>
#include <time.h>
using namespace std;
#define swap(a,b) {int tmp = a; a = b; b = tmp;}

int arr[1000010];

void quick_sort(int list[], int left, int right)
{
	if (left >= right)
		return;

	int pivot = left; 
	int start = left + 1;
	int end = right;

	while (start <= end)
	{
		while (list[pivot] >= list[start] && start <= right)
			start++;
		
		while (list[pivot] <= list[end] && end > left)
			end--;

		if (start > end)
		{
			swap(list[pivot], list[end]);
		}
		else
			swap(list[start], list[end]);
	}
	
	quick_sort(list, left, end - 1);
	quick_sort(list, end + 1, right);

}

string intToString(int n)
{
	stringstream s;
	s << n;
	return s.str();
}

int main(int argc, char** argv)
{
	
	ifstream fin(argv[1]);

	
	int cnt = -1;
	while (fin >> arr[++cnt]) {}

	
	clock_t start, end;
	start = clock();
	quick_sort(arr, 0, cnt - 1);
	end = clock();

	if (argc <= 2)
	{
		string file_name = "sorted_";
		file_name += intToString(cnt);

		ofstream writeFile(file_name);

		for (int i = 0; i < cnt; i++) writeFile << arr[i] << endl;

		writeFile.close();

	}
	else
	{
		ofstream writeFile(argv[2]);
		for (int i = 0; i < cnt; i++) writeFile << arr[i] << endl;
		writeFile.close();
	}

	printf("time : %f ", (double)(end - start) );
	return 0;
}
