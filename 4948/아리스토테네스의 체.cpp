#include <iostream>
#include <string>
#include <string.h> 
using namespace std;

int arr[250000];
int ans[250000];
int hyun[250000];

int main()
{
	for (int i = 1; i <= 250000 ; i++)
		arr[i] = i;

	int n = 0;
	int s = 0;
	int in = 0;//s�� �Է°��� in�� �Է¹迭�ε��� ���ٷ���
	int max = 0;;

	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		else if (max < n)
			max = n;

		hyun[in] = n;
		in++;
		s++;
	}

	//cout << max << "�ִ�" << endl;

	for (int i = 2; i <= max*2; i++)
	{
		if (arr[i] == 0)
			continue;
		for (int j = i+i; j <= max * 2; j+=i)
		{
			arr[j] = 0;
		}
	}//�Ƹ��佺�׳׽��� ü(�ִ����� ��������)

	int answer = 0;
	int a = 0;

	while(1)
	{
		//cout << hyun[a] << "���Ϸ� ���� " << endl;
		if (hyun[a] == 0)
			break;

		else if (hyun[a] == 1)
			ans[a] = 1;

		else
		{
			for (int j = hyun[a] + 1; j <= 2 * hyun[a]; j++)
			{
				if (arr[j] != 0)
					answer++;
			}
			//cout << answer << "���μ��� ����" << endl;
			ans[a] = answer;
		}
		answer = 0;
		a++;
	}
	for (int i = 0; i < s; i++)
	{
		cout << ans[i] << endl;
	}
}