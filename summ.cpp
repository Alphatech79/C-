#include<iostream>
using namespace std;
int cal_sum(int a, int b);
int main()
{
	int a = 0, b = 0;
	cout << "enter first value=";
	cin >> a;
	cout << "enter second value=";
	cin >> b;
	int cal = cal_sum(a, b);
	cout << "the sum is" << cal << " ";

}
int cal_sum(int a, int b)
{
	int cal_sum = 0;
	cal_sum = a + b;
	return cal_sum;
}

