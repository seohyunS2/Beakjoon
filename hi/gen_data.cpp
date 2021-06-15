#include<iostream>
#include<fstream> // 파일 입출력을 위한 헤더파일
#include<time.h> // srand의 초기값을 시간으로 설정
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
	//파일이름을 input_[명령인수]"로 지정한다.
	string file_name = "input_";
	file_name += argv[1];

	//len은 생성해야 할 수의 갯수이다. 
	//여기서 명령인수는 문자열으로 atoi 함수를 이용하여 문자를 숫자로 변환한다.
	int len = atoi(argv[1]);

	//내가 지정한 파일명은 file_name으로 이 파일명을 가진 파일에 작성한다.
	ofstream writeFile(file_name);

	// 랜덤한 수를 발생시켜 파일에 출력한다.
	make_data(writeFile, len);
	writeFile<<"hi"<<endl;

	writeFile.close();

	return 0;
}
