#include<iostream>
#include<fstream>
using namespace std;
void input(ifstream& fin, ofstream& fout, char *ptr);
void output(ofstream& fout, char *ptr, int size);
int length(char *ptr);
int main()
{
	ifstream fin;
	ofstream fout;
	char word[10];
	input(fin, fout, word);
}
void input(ifstream& fin, ofstream&fout, char *ptr)
{
	fin.open("word.txt", ios::in);
	while (!fin.eof())
	{
		fin >> ptr;
		cout << ptr << endl;
		int size = length(ptr);
		output(fout, ptr, size);
	}
	fin.close();
}
int length(char *ptr)
{
	int i;
	for (i = 0; *(ptr + i) != '\0'; i++);
	return i;
}
void output(ofstream& fout, char *ptr, int size)
{
	fout.open("output.txt", ios::app);
	fout << ptr << ' ';
	fout << size;
	fout << endl;
	fout.close();
}