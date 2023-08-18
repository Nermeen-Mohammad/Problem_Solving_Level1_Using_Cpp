
#include <iostream>
#include<cmath>
using namespace std;

int ReadNumber()
{
	int number;
	do {
		cout << "Enter negative number";
		cin >> number;
	} while (number > 0);
	return number;

}
int MyAbs(int number)
{
	if (number < 0)
		return -1 * number;
	else
		return number;
}
int CppAbs(int number)
{
	return	abs(number);
}
int main()
{
	int num= ReadNumber();
	cout << "\nYour number is " << num;
	cout << "\nMy abs is : " << MyAbs(num);
	cout << "\nCpp abs is : " << CppAbs(num);

}