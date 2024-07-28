#include <iostream>
#include <fstream>
using namespace std;
bool readData(int toRight[], int toLeft[]);
void displayReport(int toRight[], int toLeft[])
void shift(int toRight[], int toLeft[])
int main()
{
	int toLeft[8], toRight[1], n;

	readData(toRight[], toLeft[]);
	displayReport(toRight[], toLeft[]);
	shift(num[]);

	return 0;
}
bool readData(int toRight[], int toLeft[])
{
	ifstream infile;
	infile.open("data.txt");

	if (!infile)
	{
		cout << "Error opening input file!" << endl;
		return false;
	}

	for (int i = 0; i<9; i++)
		infile >> toRight[i];

	for (int i = 0; i<1; i++)
		infile >> toLeft[i];

	return true;

}
void displayReport(int toRight[], int toLeft[])
{

	for (int i = 0; i<9; i++)
	{
		cout << toRight[i];
	}

	for (int i = 0; i<1; i++)
	{
		cout << toLeft[i];
	}
}
void shift(int toRight[], int toLeft[])
{
	cout << "Enter the number of times to swap: ";
	cin >> n;
	int temp;
	int temp1;
	for (int i = 0; i<n; i++)
	{
		temp = toRight[size - 1];
		toRight[size - 1] = toRight[i];
		toRight[i] = temp;
	}
}