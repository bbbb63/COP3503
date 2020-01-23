/*Lab 2 assignment*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string fileTitle;
	string col1Header;
	string col2Header;

	cout << "Enter a title for the data: " << endl;
	getline(cin, fileTitle);
	cout << "You entered: " << fileTitle << endl;

	cout << "Enter the column 1 header: " << endl;
	getline(cin, col1Header);
	cout << "You entered: " << col1Header << endl;

	cout << "Enter the column 2 header: " << endl;
	getline(cin, col2Header);
	cout << "You entered: " << col2Header << endl;

	return 0
}