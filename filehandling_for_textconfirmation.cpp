#include<iostream>

#include<fstream>

#include<string>

using namespace std;

int main()

{

	ofstream f_1("data1.txt");

	ofstream f_2("data2.txt");



	f_1 << "Hello\nHappy\nHello";

	f_2 << "Hello\nHello\nHappy";



	f_1.close();

	f_2.close();



	ifstream f1("data1.txt");

	ifstream f2("data2.txt");



	int flag = 0;

	char ch1, ch2;

	while (1)

	{

		f1 >> ch1;

		f2 >> ch2;

		if (f1.eof() && f2.eof())

		{

			break;

		}

		if (ch1 != ch2)

		{

			flag = 1;

			break;

		}

	}

	if (flag == 1)

	{

		cout << "False";

	}

	else

	{

		cout << "True";

	}



	f1.close();

	f2.close();



	return 0;

}