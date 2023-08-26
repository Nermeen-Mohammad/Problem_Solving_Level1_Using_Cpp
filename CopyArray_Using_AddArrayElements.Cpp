
#include <iostream>
#include<cstdlib>

using namespace std;


int RandomNumber(int from, int to)
{
    int Rand = rand() % (to - from + 1) + from;
    return Rand;
}
void FillArray(int arr[100], int& length)
{
    cout << "Enter a number..length of array:\n";
    cin >> length;

    for (int i = 0; i < length; i++)
        arr[i] = RandomNumber(1,100);
}
void PrintArray(int arr[100], int length)
{
    for (int i=0; i<length; i++)
    cout << arr[i] << " ";
}
void AddArrayElements( int number, int arr2[100], int& arr2Length ) 
{
    arr2Length++;
    arr2[arr2Length - 1] = number;


}
void CopyArrayUsingAddArrayElements(int arr[100], int arrLength, int arr2[100], int arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        AddArrayElements(arr[i], arr2, arr2Length);
    }
}




int main()
{
    srand((unsigned)time(NULL));

    int arr[100], int arrLength, int arr2Length;
    FillArray(arr, arrLength);

    int arr2[100];
    CopyArrayUsingAddArrayElements(arr, arrLength, arr2, arr2Length);

    cout << "\nArray 1 elements:\n";  
    PrintArray(arr, arrLength);  

    cout << "\nArray 2 elements after copy:\n";   
    PrintArray(arr2, arr2Length);
}

