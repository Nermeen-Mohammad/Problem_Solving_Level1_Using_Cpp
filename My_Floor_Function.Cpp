

#include <iostream>
using namespace std;

float ReadNumber()
{
	cout << "Enter a float number\n";
	float num; cin >> num;
	return num;
}

int MyFloorFunction(float number)
{
	int IntPart = (int)number;
	if (IntPart > 0)
		return IntPart;
	else
		return --IntPart;
}
int main()
{
	cout << "Floor Function: " << MyFloorFunction(ReadNumber());
}
