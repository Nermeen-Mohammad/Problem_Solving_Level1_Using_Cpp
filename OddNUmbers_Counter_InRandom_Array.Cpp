
#include <iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int from, int to)
{
    int random = rand() % (to - from + 1) + from;
    return random;
}
int ReadPositiveNumber(string message)
{
    int ArrayLength;
    do
    {
        cout << message;
        cin >> ArrayLength;
    } while (ArrayLength < 0);
    return ArrayLength;
}

void FillArray(int arr[100], int& Length)
{
    for (int i = 0; i < Length; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

int OddCount(int arr[100], int Length)
{
    int counter = 0;
    for (int i = 0; i < Length; i++) {
        if (arr[i] % 2 != 0)
            counter++;
    }
    return counter;
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
}
int main()
{
    srand((unsigned) time(NULL));
    int array[100]; 
  
    int ArrayLength = ReadPositiveNumber("\nEnter the Length of array:\n");
    cout << "\nArray elements :\n";
    FillArray(array, ArrayLength);
    PrintArray(array, ArrayLength);

    cout << "\nOdd numbers count : " << OddCount(array, ArrayLength);


    
}
