

#include <iostream>
#include<string>
using namespace std;

string ReadText()
{
	cout << "Enter the text :\n";
	string text;
	getline(cin,text);
	return text;
}
string EncryptText(string text, int EncryptionKey)
{
	for (int i = 0; i < text.length(); i++) {
		text[i] = char((int)text[i] + EncryptionKey);
	}
	return text;
}
string DecryptText(string text, int EncryptionKey)
{
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] - EncryptionKey);

	}
	return text;
}
int main()
{
	int EncryptionKey = 20;
	string Text = ReadText();
	string TextAfterEncryption = EncryptText(Text , EncryptionKey);
	string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "\n Text before Encryption:  " << Text;
	cout << "\n Text after Encryption:  " << TextAfterEncryption;
	cout << "\n Text after Decryption:  " << TextAfterDecryption;

}
