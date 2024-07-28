#include<iostream>
using namespace std;
int main()
{
	string numArray[5] = { "one", "two", "three", "four", "five" };
	cout << "string array follow" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "element" << i <<"="<< numArray[i] << endl;
	}
	return 0;
}