#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/********************Functions**************************/
float readAnumber()
{
    float number;
    cout << "Please Enter A Number: ";
    cin >> number;
    return number;
}
void addElementToArray(int number, int arr[], int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = number;
}
void addUserNumberToArray(int arr[], int &arrLength)
{
    short addMore;
    do
    {
        addElementToArray(readAnumber(), arr, arrLength);
        cout << "Do You Want to Add More numbers? : [1]-> Yes | [0]-> No : ";
        cin >> addMore;
    } while (addMore);
}
void getArray(int arr[], int indexes)
{
    for (int i = 0; i < indexes; i++)
    {
        cout << arr[i] << " ";
    }
}
int getArrayElement(int arr[], int indexes)
{
    int result;
    for (int i = 0; i < indexes; i++)
    {
        result = arr[i];
    }
    return result;
}
int randNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}
void readRandomElementsToArray(int arr[], int &arrLength)
{
    cout << "\nEnter Numnber Of Elements: \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = randNumber(1, 100);
    }
}
void readRandomNegativeElementsToArray(int arr[], int &arrLength)
{
    cout << "\nEnter Numnber Of Elements: \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = randNumber(-100, 100);
    }
}
void copyArrayElements(int arr1[], int arr2[], int &arrLength, int &arra2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        addElementToArray(arr1[i], arr2, arra2Length);
    }
}
void copyOddElementsToArray(int arr1[], int arr2[], int &arr1Length, int &arr2Length)
{
    for (int i = 0; i < arr1Length; i++)
    {
        if (arr1[i] % 2 != 0)
        {
            addElementToArray(arr1[i], arr2, arr2Length);
        }
    }
}
bool isPrimary(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
void copyPrimaryNumberToArray(int arr1[], int arr2[], int &arr1Length, int &arr2Length)
{
    for (int i = 0; i < arr1Length; i++)
    {
        if (isPrimary(arr1[i]))
        {
            addElementToArray(arr1[i], arr2, arr2Length);
        }
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
void copyReversedArrayElements(int arr1[], int arr2[], int indexes)
{
    int counter = indexes;
    for (int i = 0; i < indexes; i++)
    {
        arr2[counter - 1] = arr1[i];
        counter--;
    }
}
void copyDistenctElementsToArray(int arr1[], int arr2[], int &arr1Length, int &arr2Length)
{
    for (int i = 0; i < arr1Length; i++)
    {
        if (!isInArray(arr1[i], arr2, arr2Length))
        {
            addElementToArray(arr1[i], arr2, arr2Length);
        }
    }
}
bool checkIfIsArrayElementsPalindrom(int arr1[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr1[i] != arr1[arrLength - i - 1])
            return false;
    }
    return true;
}
int countOddNumbersInArray(int arr[], int ArrLength)
{
    int counter = 0;

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] % 2 != 0)
            counter++;
    }
    return counter;
}
int countEvenNumbersInArray(int arr[], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] % 2 == 0)
            counter++;
    }
    return counter;
}
int countPositiveNumbersInArray(int arr[], int arrLength)
{

    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] >= 0)
        {
            counter++;
        }
    }
    return counter;
}
int countNegativeNumbersInArray(int arr[], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < 0)
            counter++;
    }
    return counter;
}
float myAbs(float number)
{
    if (number > 0)
        return number;
    else
        return number * -1;
}
float getFractionOfNumber(float number)
{
    return number - (int)number;
}
float MyRound(float number)
{
    float fraction = getFractionOfNumber(number);

    if (abs(fraction) >= 0.5)
    {

        if (number >= 0)
        {
            return (int)++number;
        }
        else
            return (int)--number;
    }
    else
        return (int)number;
}
float myFloor(float number)
{
    if (number > 0)
        return (int)number;
    else
        return (int)number - 1;
}
float MyCeil(float number)
{
    if (abs(getFractionOfNumber(number)) > 0)
    {
        if (number > 0)
            return (int)number + 1;
        else
            return (int)number;
    }
    else
        return number;
}
float mySqrt(float number)
{
    return pow(number, 0.5);
}
/********************Main******************************/
int main()
{
    srand((unsigned)time(NULL));
    // int arr[50];
    // int arrLength = 0;
    // addUserNumberToArray(arr, arrLength);

    // cout << "Array Length => " << arrLength << endl;
    // cout << "Array Elements => ";
    // getArray(arr, arrLength);

    // int arr1[50];
    // int arr2[50];

    // int arr1Length = 0;
    // int arr2Length = 0;

    // // readRandomElementsToArray(arr1, arr1Length);
    // addUserNumberToArray(arr1, arr1Length);
    // cout << "Array One Elements: " << endl;
    // getArray(arr1, arr1Length);

    // // copyArrayElements(arr1, arr2, arr1Length, arr2Length);
    // // copyOddElementsToArray(arr1, arr2, arr1Length, arr2Length);
    // // copyPrimaryNumberToArray(arr1, arr2, arr1Length, arr2Length);
    // copyDistenctElementsToArray(arr1, arr2, arr1Length, arr2Length);
    // // cout << "\nArray Two Elements After Copy: " << endl;
    // // getArray(arr2, arr2Length);

    // // cout << "\nArray Two Odd Elements : " << endl;
    // // getArray(arr2, arr2Length);

    // cout << "\nArray Two Distenct Elements : " << endl;
    // getArray(arr2, arr2Length);

    // int arr1[50];
    // int arrLength = 0;
    // addUserNumberToArray(arr1, arrLength);
    // if (checkIfIsArrayElementsPalindrom(arr1, arrLength))
    //     cout << "The Elements Are Palindrom .." << endl;
    // else
    //     cout << "The Elements Are Not Palindrom.." << endl;
    // getArray(arr1, arrLength);
    // int arr1[50];
    // int arrLength = 0;

    // readRandomElementsToArray(arr1, arrLength);
    // getArray(arr1, arrLength);
    // cout << "\nOdd Elements In Array => " << countOddNumbersInArray(arr1, arrLength);

    // readRandomElementsToArray(arr1, arrLength);
    // getArray(arr1, arrLength);
    // cout << "\nEven Elements In Array => " << countEvenNumbersInArray(arr1, arrLength);

    // readRandomNegativeElementsToArray(arr1, arrLength);
    // getArray(arr1, arrLength);
    // cout << "\nPositive Elements In Array => " << countPositiveNumbersInArray(arr1, arrLength);

    // readRandomNegativeElementsToArray(arr1, arrLength);
    // getArray(arr1, arrLength);
    // cout << "\nPositive Elements In Array => " << countNegativeNumbersInArray(arr1, arrLength);
    // int number = -10;
    // cout << "C++ abs => " << abs(number) << endl;
    // int number2 = -10;
    // cout << "My abs => " << myAbs(number2) << endl;
    // float number = -10.9;
    // cout << "My Round Function => " << MyRound(number) << endl;
    // cout << "C++ Round Function => " << round(number) << endl;
    float number = 25;
    cout << "My FLoor => " << myFloor(number) << endl;
    cout << "C++ Floor => " << floor(number) << endl;

    cout << "My Ceil => " << MyCeil(number) << endl;
    cout << "C++ Ceil => " << ceil(number) << endl;

    cout << "My Sqrt => " << mySqrt(number) << endl;
    cout << "C++ Sqrt => " << sqrt(number) << endl;

    return 0;
}