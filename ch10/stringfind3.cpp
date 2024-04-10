#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string str1 = "abcdef,ghi,jklm,";
	string splitstr;
	char target[10];
	stringstream ss;

	ss << str1;

	getline(ss, splitstr, ',');
	cout << splitstr << endl;
	ss.getline(target, 256, ',');
	cout << target << endl;
}
