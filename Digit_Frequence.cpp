
#include <iostream>
using namespace std;

int ReadNumber(string message)
{
    int number;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;

}
int CountDigitFrequency(int Number, short DigitToCheck)
{   
    int Frequency = 0;
    while (Number > 0)
    {
        int remainder = 0;
        remainder = Number % 10;
        if (remainder == DigitToCheck)
            Frequency++;
        Number = Number / 10;
    }
    return Frequency;
}

void PrintAllDigitsFrequencey(int Number)
{
    for (int i = 1; i <= 9; i++)
    {
        short digitFrequancy = 0;
        digitFrequancy = CountDigitFrequency(Number, i);
            if (digitFrequancy>0)
            
                cout << "Digit " << i << " Frequencey is " << digitFrequancy << " Time(s).\n";
            

    }
}
int main()
{

    int Number = ReadNumber("Enter the number:\n ");
    PrintAllDigitsFrequencey(Number);
    return 0;
}

