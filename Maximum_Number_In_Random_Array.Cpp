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
int MaxNumber(int array[100], int Length)
{
	int max;
	for (int i = 0; i < Length; i++) {
		 max = array[0];
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

int main()
{
	srand((unsigned)time(NULL));

	int array[100];
	int Length = 0;
	ReadArrayElements(array, Length);
	cout << "Max number is : " << MaxNumber(array, Length);
}
