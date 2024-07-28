#include<iostream>
using namespace std;
void selectionSort(int a[], int n) {
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++)
		if (a[j] < a[min])
			min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	int Arr[100],  i, temp;
	cout << "Enter number of elements you want to insert ";
	cin >> n;
	for (i = 0; i<n; i++)
	{
		cout << "Enter element " << i + 1 << ":";
		cin >> Arr[i];
	}
	temp = Arr[0];
	Arr[0] = Arr[n - 1];
	Arr[n - 1] = temp;
	cout << "\nArray after swapping" << endl;
	for (i = 0; i<n; i++)
		cout << Arr[i] << " ";
}