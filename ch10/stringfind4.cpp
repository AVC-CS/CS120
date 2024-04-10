#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string str1 = "abcdef,ghi,jklm,";
	string splitstr;
	char target[10][10];
	stringstream ss;

	ss << str1;
	int i = 0;
	while (ss.getline(target[i], 256, ','))
	{
		cout << target[i] << endl;
		i += 1;
	}
}
