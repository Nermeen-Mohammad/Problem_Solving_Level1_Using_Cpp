#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

enum enCharType { SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}


char GetRandomCharacter(enCharType charType)
{
    switch (charType) {

    case enCharType::CapitalLetter: {
        return char(RandomNumber(65, 90));
        break;
    }

    case enCharType::SamallLetter: {
        return char(RandomNumber(97, 122));
        break;
    }

    case enCharType::Digit: {
        return char(RandomNumber(48, 57));
        break;
    }
    case enCharType::SpecialCharacter: {
        return char(RandomNumber(33, 47));
        break;
    }
    }



}


int ReadNumberOfKyes()
{
    cout << "Enter the number of keys\n";
    int n; cin >> n;
    return n;
}

string GenerateWord(enCharType chartype, short length)
{
    string word;
    for (int i = 1; i <= length; i++)
    {
        word = word + GetRandomCharacter(chartype);
    }
    return word;
}

string GenerateKey()
{
    string key = "";
    key = GenerateWord(enCharType::CapitalLetter, 4) + '-';
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + '-';
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + '-';
    key = key + GenerateWord(enCharType::CapitalLetter, 4) ;
    return key;
}

void GenerateKyes(short numberOfKeys)
{
    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key[" << i << "] = ";
        cout << GenerateKey() << '\n';
    }

}



int main()
{
    srand((unsigned)time(NULL));

    GenerateKyes(ReadNumberOfKyes());
    return 0;
}

