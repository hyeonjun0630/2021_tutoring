#include<iostream>
using namespace std;

int Sum(int a)
{
	int sum = 0;
	sum += a % 10;
	for (int i = 10; i <= 10000000; i *= 10)
	{
		sum += a / i % 10;
	}return sum;
}

int main()
{
	int i;
	cin >> i;
	cout << Sum(i);
	return 0;
}