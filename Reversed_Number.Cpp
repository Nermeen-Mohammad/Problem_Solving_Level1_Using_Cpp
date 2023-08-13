#include <iostream>
using namespace std;


int ReadNumber(string message)
{
	int num;
	do {
		cout << message << endl;
		cin >> num;
	} while (num < 0);
	return num;
}

int ReverseNumber(int num)
{
	int Remainder = 0, Number2 = 0;

	while (num > 0)
	{
		Remainder = num % 10;
		num = num / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

void PrintDigits(int num)
{

		cout << num << endl;
}

int main()
{
	PrintDigits(ReverseNumber(ReadNumber("Please enter a positive number?")));
	return 0;
}

