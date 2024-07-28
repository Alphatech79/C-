#include<iostream>
using namespace std;
int main()
{
	const int size = 10;
	int Array[size];
	cout << "Enter the unique Elements in Array" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	int max = Array[0];
	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (max < Array[i])
		{
			max = Array[i];
			index = i;
		}
	}
	if (index != (size - 1))
	{
		int temp = Array[index];
		Array[index] = Array[size - 1];
		Array[size - 1] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
	cout << "The maximum value occurs at index " << index << endl;
	return 0;
}