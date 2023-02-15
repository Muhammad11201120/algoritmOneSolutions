#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
/*************Enums*****************/
enum enRandum
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digits = 4
};
/**************Functions*****************/
int readPositiveNumber(string msg)
{
    int number;
    do
    {
        cout << msg;
        cin >> number;

    } while (number < 0);
    return number;
}
void readArray(int arr[100], int &elements)
{
    for (int i = 0; i < elements; i++)
    {
        arr[i] = i + 1;
    }
}
void getArray(int arr[100], int elements)
{
    for (int i = 0; i < elements; i++)
    {
        cout << arr[i] << " ";
    }
}
void getStringArray(string arr[100], int elements)
{
    for (int i = 0; i < elements; i++)
    {
        cout << arr[i] << " ";
    }
}
int randNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}
void swap(int &numberOne, int &numberTwo)
{
    int temp;
    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;
}
void ArrayElementShuffle(int arr[], int indexes)
{
    int shuffler = 0;
    for (int i = 0; i < indexes; i++)
    {
        swap(arr[randNumber(1, indexes) - 1], arr[randNumber(1, indexes) - 1]);
    }
}
void copyReversedArrayElements(int arr1[], int arr2[], int indexes)
{
    int counter = indexes;
    for (int i = 0; i < indexes; i++)
    {
        arr2[counter - 1] = arr1[i];
        counter--;
    }
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
void generatArrayOfKeys(string arr[], int indexes)
{
    for (int i = 0; i < indexes; i++)
    {
        arr[i] = generateKey();
    }
}
void getArrayKeys(string arr[], int indexes)
{
    for (int i = 0; i < indexes; i++)
    {
        cout << "Array [" << i << "] : " << arr[i] << endl;
    }
}
int randNumbertTo50()
{
    return rand() % 50;
}
void setArrOfRandomDigits(int arr[100], int &indexes)
{
    for (int i = 0; i < indexes; i++)
    {
        arr[i] = randNumbertTo50();
    }
}
short findNumberInArray(int arr[], int indexes, int numberToSearchfor)
{
    for (int i = 0; i < indexes; i++)
    {
        if (arr[i] == numberToSearchfor)
        {
            return i;
        }
    }
    return -1;
}
bool isInArray(int numberToCheck, int arr[], int indexes)
{
    return findNumberInArray(arr, indexes, numberToCheck) != -1;
}

/**************Main*****************/
int main()
{
    srand((unsigned)time(NULL));
    int indexes = 0;
    string arr1[50];
    int arr2[50];
    indexes = readPositiveNumber("Please Enter A Number: ");
    // readArray(arr1, indexes);

    // cout << "Array 1 Elements => ";
    // getArray(arr1, indexes);

    // // ArrayElementShuffle(arr, indexes);
    // // cout << "\nShuffled Array Elements => ";
    // // getArray(arr, indexes);

    // copyReversedArrayElements(arr1, arr2, indexes);

    // cout << "\nReversed Array => ";
    // getArray(arr2, indexes);
    // generatArrayOfKeys(arr1, indexes);
    // getArrayKeys(arr1, indexes);
    // setArrOfRandomDigits(arr2, indexes);
    // getArray(arr2, indexes);
    // int numberToSearchFor = readPositiveNumber("\nEnter A number To Search For: ");
    // short positionNumber = findNumberInArray(arr2, indexes, numberToSearchFor);
    // if (isInArray(numberToSearchFor, arr2, indexes))
    // {
    //     cout << "Yes The Number Was Found" << endl;
    // }
    // else
    // {
    //     cout << "No The Number Wasn`t Found " << endl;
    // }
    return 0;
}