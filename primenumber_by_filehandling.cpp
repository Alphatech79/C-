#include<iostream>
#include<fstream>
using namespace std;
void input(ifstream& fin, int *ptr);
void prime(int *ptr);
int main()
{
	int arr[10] = { 0 };
	ifstream fin;
	input(fin, arr);
	prime(arr);
	return 0;

}
void input(ifstream& fin, int *ptr)
{
	fin.open("input.txt", ios::in);
	for (int i = 0; i < 10; i++)
	{
		fin >> *(ptr + i);
	}
	fin.close();
}
void prime(int *ptr)
{
	for (int k = 0; k < 10; k++)
	{
		bool flag = false;
		for (int i = 2; i <= *(ptr + k) / 2; i++)
		if (*(ptr + k) % i == 0)
		{
			flag = true;
			break;
		}
		if (flag == false)
		{
			cout << *(ptr + k) << endl;
		}
	}
}