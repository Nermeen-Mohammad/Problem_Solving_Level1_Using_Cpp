
#include <iostream>
using namespace std;
string ReadPassword()
{
	string password;
	
		cout << "Please enter a 3-Letter Password (all capital)?\n";
		cin >> password;
		return password;
}
bool GuessPassword(string password)
{
	string word="";
	int counter = 0;
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				counter++;
				cout << "Trial[" << counter << "] " << word <<'\n';
				if (word == password)
				{
					cout << "\nPassword is:  " << word;
					cout << "\nFound after  " << counter << "  Trial(s) ^_^"<< endl;
					return true;
				}
				word = "";

			}
		}
	}
	return false; //not found
}

int main()
{
	GuessPassword(ReadPassword());
}
