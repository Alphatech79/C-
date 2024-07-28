#include<iostream>
using namespace std;
int main()
{
	int number1 = 0;
	int number2 = 0;

	do{
		cout << "Enter Pair " << endl;
		cin >> number1 >> number2;
		if (number1%number2 != 0)
		{
			cout << "NO" << endl;
		}

	} while (number1%number2 != 0);
	
	cout << "Your desired number pair is  ( " << number1 << " , " << number2 << " )" << endl;
	return 0;
}