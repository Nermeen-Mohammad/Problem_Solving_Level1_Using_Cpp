

#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int number;
    do
    {
        cout << "Enter a positive number\n";
        cin >> number;
    } while (number < 0);
        return number;
}
int RevrsedNumber(int number)
{
  
    int remainder = 0, reversedNumber = 0;
    while (number > 0) {
        
        remainder = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    return reversedNumber;
}
void checkPalindrome (int number)
{
  if (number == RevrsedNumber(number))
  cout << "Yes, it's a palindrome number\n";
  else
      cout << "No, it's not a palindrome number\n";
}


int main()
{

    checkPalindrome(ReadPositiveNumber());
}
