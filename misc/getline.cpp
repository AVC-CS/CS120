#include <iostream>
using namespace std;

int main()
{
   char line[100];
   cout << " Type a line terminated by 't'" << endl;
   cin.getline( line, 100, '\n' );
   cout << line;
}
