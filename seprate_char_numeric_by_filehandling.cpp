#include <iostream>
#include <fstream>
using namespace std;
void seprt(char arra[], int size);
int main(){

	ifstream fin;
	fin.open("input1.txt");
	const int size = 100;
	char arra[size];
	fin.getline(arra, size, '\n');

	seprt(arra, size);




	return 0;
}
void seprt(char arra[], int size)
{
	ofstream fout1, fout2;
	fout1.open("char out.txt");
	fout2.open("numeric out.txt");
	for (int i = 0; arra[i] != '\0'; i++)
	{
		if (arra[i] >= 'a'&&arra[i] <= 'z' || arra[i] >= 'A'&&arra[i] <= 'Z')
		{
			fout1 << arra[i];
		}
		else
		{
			fout2 << arra[i];
		}

	}

}