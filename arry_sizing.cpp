#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int Array[size];
	int n = 0;
	int X = 0;
	int index;
	bool flag = false;
	cout << "enter the value of n" << endl;
	cin >> n;
	if (n < 10){
		cout << "Enter the Element in Array" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> Array[i];
		}
		cout << "enter the value of X" << endl;
		cin >> X;
		for (int i = 0; i < n; i++)
		{
			cout << Array[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			if (Array[i] == X)
			{
				index = i;
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			for (int i = index; i < n; i++)
			{
				Array[i] = Array[i + 1];
			}
			for (int i = 0; i < n - 1; i++)
			{
				cout << Array[i] << " ";
			}
			cout << "\nUpdated Value of N :" << n << endl;
		}
		else
			cout << X << " Doesnot exist in array" << endl;

	}
	else
	{
		cout << "Wrong output" << endl;
	}

	
	return 0;
}