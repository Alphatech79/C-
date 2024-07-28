#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	ifstream fin;
	fin.open("input.txt");
	if (!fin.is_open())
	{
		cout << "File opening error.\n";
	}
	else
	{
		int key = 0;
		cout << "Enter the key: ";
		cin >> key;
		char arr[30] = {};
		fout.open("output.txt");
		while (!fin.eof())
		{
			fin >> arr;
			for (int i = 0; arr[i] != '\0' && arr[i] != ' '; i++)
			{
				if ((arr[i] >= 'a'&&arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
				{
					for (int j = 0; j < key; j++)
					{
						if (arr[i] == 'z')
						{
							arr[i] = 'a';
						}
						else if (arr[i] == 'Z')
						{
							arr[i] = 'A';
						}
						else
						{
							arr[i] += 1;
						}
					}
				}
			}
			fout << arr << " ";
		}
	}
	fin.close();
	fout.close();
	return 0;
}