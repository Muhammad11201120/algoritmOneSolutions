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
/********************Main******************************/
int main()
{
    int arr[50];
    int arrLength = 0;
    addUserNumberToArray(arr, arrLength);

    cout << "Array Length => " << arrLength << endl;
    cout << "Array Elements => ";
    getArray(arr, arrLength);
    return 0;
}