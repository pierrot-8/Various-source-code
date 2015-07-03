//====•¶š—ñ‚Ì”‚ğ’²‚×‚é====

#include <iostream>
#include <string>
using namespace std;

int strLength(const char*s){

	int num = 0;

	while (*s++)
	{
		num++;
	}
	return num;
}

int main(){
	int num;

	char str[] = "123456789 123456789";
	
	cout << "•¶š‚Í=" << str << endl;
	cout << "•¶š”‚Í=" << strLength(str) << endl;

	getchar();

	return 0;
}
