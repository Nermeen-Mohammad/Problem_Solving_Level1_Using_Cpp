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
	cout << "Array1 elements: ";
	for (int i = 0; i < Length; i++) {
		array[i] = RandomNumbers(1, 100);

		cout << array[i] << " ";
		
	}
	cout << endl;
}

void PrintArrayElements(int array[100], int& Length)
{
	int array2[100];
	cout << "Array2 elements: ";
	for (int i = 0; i < Length; i++) {
		array2[i] = array[i];
		cout << array2[i] << " ";
	}

}


int main()
{
	srand((unsigned)time(NULL));

	int array[100];
	int Length = 0;
	ReadArrayElements(array, Length);
	PrintArrayElements(array, Length);
}
