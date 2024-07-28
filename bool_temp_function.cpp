#include<iostream>
using namespace std;
int main()
{
	const int size = 20;
	int count = 0;
	int input;
	int Array[size];
	cout << "Enter the elements in Array" << endl;
	for (int i = 0; i < size; i++)
	{
		cin>>input;
		if (input != -99)
		{
			Array[i] = input;
			count++;
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < count; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
		int i, j, temp;
		for (i = 0; i < count - 1; i++)
		{
			for (j = i + 1; j < count; j++)
			if (Array[j] < Array[i])
			{
				temp = Array[j];
				Array[j] = Array[i];
				Array[i] = temp;
			}
				
			
		}

		for (i = 0; i < count; i++)
		{
			cout << Array[i] << " ";
		}
		cout << endl;



	return 0;
}