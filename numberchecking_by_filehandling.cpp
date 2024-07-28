#include<iostream>
#include<fstream>
using namespace std;
bool checkNumber(int);
int main()
{
	int num = 0;
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	if (!fin.is_open())
	{
		cout << "File opening error.\n";
	}
	else
	{
		fout.open("output.txt");
		bool flag = false;
		while (!fin.eof())
		{
			fin >> num;
			flag = checkNumber(num);
			if (flag == true)
			{
				fout << num << ' ';
			}
		}
	}
	fin.close();
	fout.close();
	return 0;
}
bool checkNumber(int num)
{
	int remainder = num % 10;
	int divider = 1;
	int num_copy = num;
	int count = 0;
	while (num_copy != 0)
	{
		num_copy = num_copy / 10;
		count++;
	}
	for (int i = 0; i < count - 1; i++)
	{
		divider = divider * 10;
	}
	int quotient = num / divider;
	if (quotient == remainder)
	{
		return true;
	}
	else
	{
		return false;
	}
}