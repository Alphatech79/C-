#include <iostream>
using namespace std;

int main()
{
	string str;
	cout << "Enter the string ";
	getline(cin, str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] <= 122)       
			str[i] = str[i] + 1;          
		
	}


	cout << "\n The converted string: " << str;
	return 0;
}