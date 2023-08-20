#include<iostream>
using namespace std;

int ReadNumber()
{
	cout << "Enter the number you want to check:\n";
	int n; cin >> n;
	return n;
}
void ReadArray(int array[100], int& Length)
{
	int element;
	cout << "Enter the number of element\n ";
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		cout << "Enter Array elements[" << i+1 << "]\n";
		cin >> array[i];

	}


}
void PrintArrayElements(int array[100], int Length)
{
	for (int i = 0; i < Length; i++)
		cout << "Element[" << i + 1 << "] : " << array[i] << endl;
}
int CheckRepetedElements(int array[100], int Length, int n)
{
	int counter = 0;
	for (int i = 0; i < Length; i++)
	{
		if (n == array[i])
			counter++;
	}
	return counter;

}

int main()
{
	int array[100], Length;
	
	ReadArray(array, Length);
	int NumberToCheck = ReadNumber();
	cout << "Original Array: \n";
	PrintArrayElements(array, Length);
	cout << "Number " << NumberToCheck << " is repeted ";
	cout << CheckRepetedElements(array, Length, NumberToCheck) << " times\n";

	return 0;
}
