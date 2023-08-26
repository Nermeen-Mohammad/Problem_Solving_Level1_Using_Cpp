#include <iostream>
#include<cstdlib>
using namespace std;

int RandomNumber(int From , int To)
{
    int RandomNumber =rand()% (To - From + 1) + From;
    return RandomNumber;
}

enum enCharType{ SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enCharType charType)
{
    switch(charType){

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

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::CapitalLetter)<<endl;
    cout << GetRandomCharacter(enCharType::Digit)<<endl;
    cout << GetRandomCharacter(enCharType::SamallLetter)<<endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter)<<endl;
                                                         
}

