

#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber()
{
	cout << "Enter a float number:\n";
	float num;
	cin  >> num;
	return num;
}
float Fraction(float number)
{
	float fraction = number - (int)number;
	return fraction;
}
int MyRound(float number) 
{
	int IntPart = int(number);
	float FractionPart = Fraction(number);
	if (abs(FractionPart) >= .5)
	{
		if (number > 0)
		return 	++IntPart;
		else
		return	--IntPart;

	}
	else
		return IntPart;

}

int main()
{
	cout <<"Round Function : " << MyRound(ReadNumber());
}
