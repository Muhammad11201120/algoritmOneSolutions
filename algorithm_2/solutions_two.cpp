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
void letterPattern(int number)
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
/*********************Main*********************/
int main()
{
    // invertedPsttern(readPositiveNumber());
    // numberPattren(readPositiveNumber());
    letterPattern(readPositiveNumber());
    return 0;
}