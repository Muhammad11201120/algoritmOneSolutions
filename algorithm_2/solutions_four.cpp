#include <iostream>
#include <string>
using namespace std;
/********************Functions**************************/
int readAnumber()
{
    int number;
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
    bool addMore;
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

    int arr1[50];
    int arr2[50];

    int arr1Length = 0;
    int arr2Length = 0;

    readRandomElementsToArray(arr1, arr1Length);

    cout << "Array One Elements: " << endl;
    getArray(arr1, arr1Length);

    // copyArrayElements(arr1, arr2, arr1Length, arr2Length);
    // copyOddElementsToArray(arr1, arr2, arr1Length, arr2Length);
    copyPrimaryNumberToArray(arr1, arr2, arr1Length, arr2Length);

    // cout << "\nArray Two Elements After Copy: " << endl;
    // getArray(arr2, arr2Length);

    // cout << "\nArray Two Odd Elements : " << endl;
    // getArray(arr2, arr2Length);

    cout << "\nArray Two Primary Elements : " << endl;
    getArray(arr2, arr2Length);

    return 0;
}