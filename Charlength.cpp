//====文字列の数を調べる====

#include <iostream>
#include <string>

using namespace std;

int strLength(const char*s){
	int num = 0;

	while (*s++){
		num++;
	}
	return num;
}

int main(){
	int num;

	char str[] = "123456789 123456789";
	
	cout << "文字は=" << str << endl;
	cout << "文字数は=" << strLength(str) << endl;

	getchar();

	return 0;
}
