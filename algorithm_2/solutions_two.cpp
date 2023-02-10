#include <iostream>
#include <string>
using namespace std;
/********************Functions******************/
int readPositiveNumber()
{
    int number;
    do
    {
        cout << "Enter A Positive Number: ";
        cin >> number;

    } while (number < 0);
    return number;
}
void invertedPsttern(int number)
{
    int invertedNumber = number;
    for (int i = number; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void numberPattren(int number)
{

    int invertedNumber = number;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void invertedLetterPattern(int number)
{
    for (int i = number; i > 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(64 + i);
        }
        cout << "\n";
    }
}
void letterPattern(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(65 - 1 + i);
        }
        cout << endl;
    }
}
void wordsFromAtoZ()
{
    string word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word += char(i);
                word += char(j);
                word += char(k);

                cout << word << endl;
                word = "";
            }
        }
    }
}
string readString()
{
    string str;
    cout << "Enter The String: ";
    cin >> str;
    return str;
}
void guessPassowrd(string pass)
{
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = char(i);
                word += char(j);
                word += char(k);
                counter++;
                if (word == pass)
                {
                    cout << "Trial [" << counter << "]: ";
                    cout << "The Pssword Is => " << word << endl;
                    break;
                }
                cout << "Trial [" << counter << "]: => " << word << endl;
                word = "";
            }
            if (word == pass)
                break;
        }
        if (word == pass)
            break;
    }
}
/*********************Main*********************/
int main()
{
    // invertedPsttern(readPositiveNumber());
    // numberPattren(readPositiveNumber());
    // invertedLetterPattern(readPositiveNumber());
    // letterPattern(readPositiveNumber());
    // wordsFromAtoZ();
    guessPassowrd(readString());
    return 0;
}