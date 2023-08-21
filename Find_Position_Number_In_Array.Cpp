

#include <iostream>
#include<cstdlib>

using namespace std;

int ReadArrayLength()
{
    int length;
    do {
        cout << "Pleases enter the size of array\n";
        cin >> length;
    } 
    while (length < 0);
    return length;
}
int RandomNumber(int from, int to) 
{
    int RandomNumber = rand() % (to - from + 1) + from;
    return RandomNumber;
}
void FillArray(int arr[100], int &ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++) {
        arr[i] = RandomNumber(1, 100);
}
}
void PrintArrayElements(int arr[100], int ArrayLength)
{
    cout << "\nArray Elements:\n";
    for (int i = 0; i < ArrayLength; i++)
        cout << arr[i] << " " <<'\n';

}
short ReadNumberToSearch()
{
    cout << "\nPlease enter a number to search for:\n";
    int number;
    cin >> number;
    return number;
}
short FindNumberPositionInArray(int arr[100], int ArrayLength, int NumberToSearch)
{
    
    for (int i = 0; i < ArrayLength; i++)
    {
        if (arr[i] == NumberToSearch)
            return i;
    }
   
            return -1;
    }




int main()

{
    srand((unsigned)time(NULL));
    int arr[100];
    int ArrayLength = ReadArrayLength();
    FillArray(arr, ArrayLength);
    

    PrintArrayElements(arr, ArrayLength);
    short NumberToSearch = ReadNumberToSearch();
  short check= FindNumberPositionInArray(arr, ArrayLength, NumberToSearch);

  if (check == -1)
      cout << "The number is not found :(";
  else {
      cout << "The number found at position:";
      cout << check << endl;
      cout << "The number found in order:";
      cout << check + 1 << endl;
  }
}

