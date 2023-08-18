
#include <iostream>
using namespace std;

float ReadNumber()
{
    cout << "Enter the Number:\n";
    float num; cin>> num;
    return num;
}
int MySqrt(float num)
{
    return pow(num, 0.5);
}
int main()
{
    cout << "Sqrt Function: " << MySqrt(ReadNumber());
}
