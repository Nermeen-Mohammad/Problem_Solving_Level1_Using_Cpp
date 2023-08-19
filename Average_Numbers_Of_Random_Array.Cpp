

#include <iostream>
#include<cstdlib>

using namespace std;

int RandomNumbers(int From, int To)
{
	int random = rand() % (To - From + 1) + From;
	return random;
}
void ReadArrayElements(int array[100], int& Length)
{
	cout << "Enter the size of array:\n";
	cin >> Length;
	for (int i = 0; i < Length; i++) {
		array[i] = RandomNumbers(1, 100);
		cout << "Array elements: " << array[i] << endl;
	}
}
int SumNumbers(int array[100], int Length)
{
	int sum = 0;

	for (int i = 0; i < Length; i++) {

		sum += array[i];
	}
	return sum;
}

float AvgNumbers(int array[100], int Length)
{
	return (float)SumNumbers(array,Length) / Length;
}



int main()
{
	srand((unsigned)time(NULL));

	int array[100];
	int Length = 0;
	int sum = SumNumbers(array, Length);
	ReadArrayElements(array, Length);
	cout << "Avg numbers is : " << AvgNumbers(array,Length);
}
