
#include <iostream>
using namespace std;

void printArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

}
bool IsPalindromeArray(int arr[], int& arrLength )
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength - 1 - i])
            return false;;
    };
    return true;

}
int main()
{
    int arr[] = { 10, 20, 30, 30, 20, 10 };
   
    int arrLength=6;
    cout << "\n Array elements:\n";
    printArray(arr, arrLength);

    if (IsPalindromeArray(arr, arrLength))
        cout << "\n Yes Array Is Palindrome";
    else
        cout << "\n Yes Array  Not Palindrome";

 
}
