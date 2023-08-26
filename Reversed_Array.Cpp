#include <iostream>
using namespace std;


int NumberOfElements()
{

    cout << "Enter a number of element:\n";
    int n; cin >> n;
    return n;

}
int RandomNumbers(int from, int to)
{
    int random = rand() % (to - from + 1) + from;
    return random;
}
void ArrayElements(int arr[100], int& Length)
{
    for (int i = 0; i < Length; i++) {
        arr[i] = RandomNumbers(1,100);
    }
}
void PrintArray(int arr[100], int Length) {
    for (int i = 0; i < Length; i++) {
        cout << "[" << arr[i] << "]";
    }
    cout << '\n';
}
void ReversedArray(int arr[100],int arr2[100], int Length) {
    for (int i = 0; i < Length; i++) {
        arr2[i] = arr[Length - 1 - i];
    }
}
int main()
{
    int Length = NumberOfElements();
    int arr[100];
    int arr2[100];
    
    ArrayElements(arr, Length);
    cout << "\nOriginal Array:\n";
    PrintArray(arr, Length);

    ReversedArray(arr,arr2, Length);
   
    cout << "\nReversed Array:\n";
    PrintArray(arr2, Length);
}

