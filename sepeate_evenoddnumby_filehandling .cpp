#include<iostream>
#include<fstream>
using namespace std;
void even(ofstream& fout, int number)
{
	fout << number << " ";



}
void odd(ofstream& fout, int number)
{
	fout << number << " ";



}
void input(ifstream& fin, ofstream& file_of_even, ofstream& file_of_odd)
{
	int input;
	while (!fin.eof())
	{
		fin >> input;
		if (input % 2 == 0)
			even(file_of_even, input);
		else
			odd(file_of_odd, input);
	}
}
int main()
{
	ifstream fin;
	fin.open("numbers.txt", ios::in);



	ofstream file_of_even;
	file_of_even.open("even.txt", ios::out);



	ofstream file_of_odd;
	file_of_odd.open("odd.txt", ios::out);



	input(fin, file_of_even, file_of_odd);



	return 0;
}