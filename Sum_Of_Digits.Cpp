
#include <iostream>
using namespace std;
int ReadNumber()
{
    cout << "Enter the number:\n";
    int n;
    cin >> n;
    return n;
}

int SumDigits(int n)
{
    int sum = 0, remainder = 0;
    while (n > 0) {
        
         remainder = n % 10;
        sum += remainder;
        n = n / 10;
    }
    return sum;
}
int main()
{
   cout <<  SumDigits(ReadNumber());
}

