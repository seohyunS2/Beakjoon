#include<iostream>
#include<fstream> // ���� ������� ���� �������
#include<time.h> // srand�� �ʱⰪ�� �ð����� ����
using namespace std;


#define MAX_TABLE 1000000 
bool vst[MAX_TABLE] = { 0, };

void make_data(ofstream &file, int len) {

	srand((unsigned int)time(NULL));
	for (int i = 0; i < len; i++) {
		
		int rand_value = rand()%len+1;
		if(vst[rand_value]==1)
			i--;
		else{
			vst[rand_value]=1;
			file << rand_value<<endl;
		}
	}

	file.close();
}

int main(int argc, char** argv) {
	//�����̸��� input_[����μ�]"�� �����Ѵ�.
	string file_name = "input_";
	file_name += argv[1];

	//len�� �����ؾ� �� ���� �����̴�. 
	//���⼭ ����μ��� ���ڿ����� atoi �Լ��� �̿��Ͽ� ���ڸ� ���ڷ� ��ȯ�Ѵ�.
	int len = atoi(argv[1]);

	//���� ������ ���ϸ��� file_name���� �� ���ϸ��� ���� ���Ͽ� �ۼ��Ѵ�.
	ofstream writeFile(file_name);

	// ������ ���� �߻����� ���Ͽ� ����Ѵ�.
	make_data(writeFile, len);
	writeFile<<"hi"<<endl;

	writeFile.close();

	return 0;
}
