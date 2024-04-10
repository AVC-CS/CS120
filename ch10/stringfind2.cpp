#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "abcdef,ghi,jklm,";
	string splitstr;
	char target[10][10];
	int found, start, i, j;

	start = 0;
	found = str1.find(',');
	splitstr = str1.substr(0, found - start);
	cout << "Substring using substr: " << splitstr << endl;
	for (i = 0; i < found; i++)
	{
		target[0][i] = str1[i];
	}
	target[0][i] = '\0';
	cout << "Substring using char array " << target[0] << endl;

	start = 0;
	i = 0;
	j = 0;
	while ((found = str1.find(',', start)) != string::npos)
	{
		cout << "--Debug " << found << " start " << start << endl;
		for (j = 0; j < found - start; j++)
		{
			target[i][j] = str1[start + j];
		}
		target[i][j] = '\0';
		cout << "Split words in Char Array " << target[i] << endl;
		start = found + 1;
		i += 1;
	}
}
