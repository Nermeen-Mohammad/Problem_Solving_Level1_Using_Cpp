#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string message )
{
	int num;
	do {
		cout << message;
		cin >> num;
	}
	while (num <= 0);
	return num;
}
void ReversedOrder(int num)
{
	int remainder = 0;
	while (num > 0)
	{
		remainder = num % 10; // 123 % 10 = 3
		num = num / 10;      // 123 /  10 = 12
		cout << remainder;
		 
	}
	
}

int main()
{

	 ReversedOrder(ReadNumber("Please enter a positive number "));
	return 0;
}