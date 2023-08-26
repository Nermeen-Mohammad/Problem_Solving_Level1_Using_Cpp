
#include <iostream>
using namespace std;



int ReadNumber()
{
	int numbers;

	cout << "Please enter a number:\n";
	cin >> numbers;
	return numbers;
}

void AddArrayElements(int number, int arr[100], int& ArrayLength)
{
	ArrayLength++;
	arr[ArrayLength - 1] = number;
}
void InputUserNumbersInArray(int arr[100], int& Arraylength)
{
	bool AddMore = true;
	do
	{
		AddArrayElements(ReadNumber(), arr, Arraylength);
		cout << "Do you want to add more numbers? [0]:NO , [1]:YES \n";
		cin >> AddMore;

	} while (AddMore);
}

void PrintArray(int arr[100], int Arraylength)
{
	for (int i = 0; i < Arraylength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}


int main()
{
	int arr[100], ArrayLength = 0;
	InputUserNumbersInArray(arr, ArrayLength);
	cout << "\nArrayLength: " << ArrayLength;
	cout << "\nArray Elements : ";
	PrintArray(arr, ArrayLength);
}
