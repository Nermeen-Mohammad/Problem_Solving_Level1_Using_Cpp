

#include <iostream>
using namespace std;

float ReadNumber()
{
	cout << "Enter a float number\n";
	float num; cin >> num;
	return num;
}

int MyCeilFunction(float number)
{
	int IntPart = (int)number;
	if (IntPart > 0)
		return ++IntPart;
	else
		return IntPart;
}
int main()
{
	cout<< "Ceil Function: " << MyCeilFunction(ReadNumber());
}
