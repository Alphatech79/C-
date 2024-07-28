#include<iostream>
#include<fstream>
using namespace std;
void input(ifstream& fname, ifstream& lname, char str1[], char str2[]);
void concatenation(char str1[], char str2[]);
int length(char str1[]);
void fullname(ofstream& funame, char str1[]);
int main()
{
	char str1[20];
	char str2[20];
	ifstream fname;
	ifstream lname;
	fname.open("fname.txt", ios::app);
	lname.open("lname.txt", ios::app);
	ofstream funame;
	funame.open("funame.txt", ios::out);
	input(fname, lname, str1, str2);
	concatenation(str1, str2);
	fullname(funame, str1);
}
void input(ifstream& fname, ifstream& lname, char str1[], char str2[])
{

	while (!fname.eof())
	{
		fname.getline(str1, 20);
	}
	fname.close();
	while (!lname.eof())
	{
		lname.getline(str2, 20);

	}
	lname.close();
}
int length(char str1[])
{
	int i;
	for (i = 0; str1[i] != '\0'; i++);
	return i;
}
void concatenation(char str1[], char str2[])
{
	int b = length(str1);
	str1[b++] = ' ';
	for (int i = 0; str2[i] != '\0'; i++, b++)
	{
		str1[b] = str2[i];
	}
	str1[b] = '\0';
	cout << str1;
}
void fullname(ofstream& funame, char str1[])
{
	funame << str1 << " ";
}