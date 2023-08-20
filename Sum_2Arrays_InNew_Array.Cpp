

#include <iostream>
#include<cstdlib>

using namespace std;

int  RandomNumbers(int From, int To)
{
	int random = rand() % (To - From + 1) + From;
	return random;
}
int  LengthOfArrays()
{
	cout << "Enter the size of array:\n";
	int Length;
	cin >> Length;
	return Length;
}
void FillArrayWithRandomNumbers(int array[100], int& Length)
{
	    for (int i = 0; i < Length; i++) {
		array[i] = RandomNumbers(1, 100);
	}
	
}
void PrintArrayElements(int array[100], int& Length)
{
	
	for (int i = 0; i < Length; i++) {
		
		cout << array[i] << " ";
	}
	cout << endl;
}
void SumArray(int array1[100], int array2[100], int array3[100], int Length)

{
	
	for (int i = 0; i < Length; i++)
	{
		array3[i] = array1[i] + array2[i];
	}
	
}

int main()
{
	srand((unsigned)time(NULL));

	int array1[100], array2[100], array3[100];
	int Length = LengthOfArrays();

	FillArrayWithRandomNumbers(array1, Length);
	FillArrayWithRandomNumbers(array2, Length);
	SumArray(array1, array2, array3, Length);

	cout << "\nArray1 elements:\n";
	PrintArrayElements(array1, Length);

	cout << "\nArray2 elements:\n";
	PrintArrayElements(array2, Length);

	cout << "\nArray3 elements:\n";
	PrintArrayElements(array3, Length);
}
