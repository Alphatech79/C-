#include<iostream>
#include<fstream>
using namespace std;
void input(ifstream& fin, int *ptr);
void second_largest(int arr[], int *largest, int *slargest);
void second_min(int arr[], int *minimum, int *sminimum);
int main()
{
	int max, smax;
	int min, smin;
	int arr[10] = { 0 };
	ifstream fin;
	input(fin, arr);
	second_largest(arr, &max, &smax);
	second_min(arr, &min, &smin);
}
void input(ifstream& fin, int *ptr)
{
	fin.open("input.txt", ios::in);
	for (int i = 0; i < 10; i++)
	{
		fin >> *(ptr + i);
	}
}
void second_largest(int arr[], int *largest, int *slargest)
{
	*largest = arr[0];
	*slargest = arr[1];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i]>*largest)
		{
			*slargest = *largest;
			*largest = arr[i];
		}
		else if (arr[i] > *slargest && arr[i] != *largest)
		{
			*slargest = arr[i];
		}
	}
	cout << "Second Largest Element in array is: " << *slargest << endl;
}
void second_min(int arr[], int *minimum, int *sminimum)
{
	*minimum = arr[0];
	*sminimum = arr[1];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i]<*minimum)
		{
			*sminimum = *minimum;
			*minimum = arr[i];
		}
		else if (arr[i] < *sminimum && arr[i] != *minimum)
		{
			*sminimum = arr[i];
		}
	}
	cout << "Second minimum Element in array is: " << *sminimum << endl;
}