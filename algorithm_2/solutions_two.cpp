#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
/**********************Enums******************/
enum enRandum
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digits = 4
};
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
string incriptionStr(string &str, int incriptionKey)
{
    for (int i = 0; i <= str.length(); i++)
    {
        str[i] = char((int)str[i] + incriptionKey);
    }
    return str;
}
string decriptionStr(string &str, int incriptionKey)
{
    for (int i = 0; i <= str.length(); i++)
    {
        str[i] = char((int)str[i] - incriptionKey);
    }
    return str;
}
int randNumberTo10()
{
    int range = 0;
    for (int i = 1; i <= 10; i++)
    {
        range = rand() % 10;
    }
    return range;
}
int randNumbertTo50()
{

    return rand() % 50;
}
int randNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}
char getRandomChar(enRandum charType)
{
    switch (charType)
    {
    case enRandum::SmallLetter:
        return char(randNumber(97, 122));
    case enRandum::CapitalLetter:
        return char(randNumber(65, 67));
    case enRandum::Digits:
        return char(randNumber(48, 58));
    }
    return char(randNumber(33, 47));
}
string generateWord(enRandum keyType, short length)
{
    string word = "";
    for (short i = 1; i <= length; i++)
    {
        word = word + getRandomChar(enRandum::CapitalLetter);
    }
    return word;
}
string generateKey()
{
    string word = "";
    word = generateWord(enRandum::CapitalLetter, 4) + "-";
    word += generateWord(enRandum::CapitalLetter, 4) + "-";
    word += generateWord(enRandum::CapitalLetter, 4) + "-";
    word += generateWord(enRandum::CapitalLetter, 4);
    return word;
}
void GenerateKeys(int numberOfKeys)
{
    for (int i = 1; i <= numberOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << generateKey() << endl;
    }
}
int setArrayElements()
{
    int index = readPositiveNumber();
    return index;
}
int readPositiveArrayElements()
{
    int number;
    do
    {
        cout << "How Many Element In The Array: ";
        cin >> number;
    } while (number < 0);
    return number;
}
void readArray(int arr[100], int &elements)
{
    cout << "Enter Array Elements: " << endl;
    for (int i = 1; i <= elements; i++)
    {
        cout << "Indix number [" << i << "] : ";
        cin >> arr[i];
    }
}
void getArray(int arr[100], int elements)
{
    for (int i = 1; i <= elements; i++)
    {
        cout << arr[i] << endl;
    }
}
int checkElementInArray(int arr[100], int indexes, int element)
{
    int counter = 0;

    for (int i = 1; i <= indexes; i++)
    {
        if (arr[i] == element)
        {
            counter++;
        }
    }
    return counter;
}
void setArrOfDigits(int arr[100], int &indexes)
{
    for (int i = 0; i < indexes; i++)
    {
        arr[i] = randNumbertTo50();
    }
}
void getArrayOfDigits(int arr[100], int indexes)
{
    cout << "Elements Of Array Are => ";
    for (int i = 0; i < indexes; i++)
    {
        cout << arr[i] << " ";
    }
}
/*********************Main*********************/
int main()
{
    srand((unsigned)time(NULL));
    // invertedPsttern(readPositiveNumber());
    // numberPattren(readPositiveNumber());
    // invertedLetterPattern(readPositiveNumber());
    // letterPattern(readPositiveNumber());
    // wordsFromAtoZ();
    // guessPassowrd(readString());
    // string text = readString();
    // int incriptionKey = 2;

    // cout << "Text Before incriptionStr: " << text << endl;
    // cout << "Text After incriptionStr: " << incriptionStr(text, incriptionKey) << endl;
    // cout << "Text After decriptionStr: " << decriptionStr(text, incriptionKey) << endl;
    // cout << randNumber(1, 10);
    // int x;
    // int y;

    // x = time(NULL);
    // for (int i = 1; i <= 10000; i++)
    // {
    //     cout << i << endl;
    // }
    // y = time(NULL);
    // cout << "Time Token => " << y - x << endl;
    // cout << getRandomChar(enRandum::SmallLetter) << endl;
    // cout << getRandomChar(enRandum::CapitalLetter) << endl;
    // cout << getRandomChar(enRandum::Digits) << endl;
    // cout << getRandomChar(enRandum::SpecialCharacter) << endl;
    // GenerateKeys(readPositiveNumber());
    // int arr[100];
    // int element = readPositiveArrayElements();
    // int numberToCheck;
    // readArray(arr, element);
    // cout << "\nOriginal Array Elements Are:\n";
    // getArray(arr, element);
    // cout << "Enter A Number TO Check: ";
    // cin >> numberToCheck;
    // cout << numberToCheck << " Is Repeated: " << checkElementInArray(arr, element, numberToCheck) << endl;
    int arr[100];
    int indexes = readPositiveNumber();
    setArrOfDigits(arr, indexes);
    getArrayOfDigits(arr, indexes);
    return 0;
}