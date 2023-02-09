#include <iostream>
#include <string>
using namespace std;
/*********Enums************/
enum enIsPrime
{
    Prime,
    NotPrime
};
enum enIsPerfect
{
    Perfect,
    NotPerfect
};
/*********Structs********/
/**********Functions*******/
void title()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n"
         << endl;
}
void header()
{
    title();
    for (short i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }
    cout << "\n-----------------------------------------------------------------------------------\n";
}
string columSperator(int i)
{
    if (i < 10)
        return "   |";
    else
        return "  |";
}
void multiplication()
{
    header();
    for (short i = 1; i <= 10; i++)
    {
        cout << i << columSperator(i) << "\t";
        for (short j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << "\n";
    }
    cout << "------------------------------------------------------------------------------------\n";
}
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
enIsPrime checkIsPrimary(int number)
{
    // int n = round(number / 2); // optimizing
    bool isPrime = true;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return enIsPrime::NotPrime;
        }
    }
    return enIsPrime::Prime;
}
void printISPrimaty(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (checkIsPrimary(i) == enIsPrime::Prime)
        {
            cout << i << endl;
        }
    }
}
bool checkDividors(int number)
{
    int result = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            result = result + i;
        }
    }
    return number == result;
}
void printIsPerfectOrNot(int number)
{
    if (checkDividors(number))
    {
        cout << number << " Is Perfect.." << endl;
    }
    else
    {
        cout << number << " Is Not Perfect.." << endl;
    }
}
void printIsPerfect(int number)
{
    if (checkDividors(number))
    {
        cout << number << endl;
    }
}
void printPerfectNumberFromOneToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        printIsPerfect(i);
    }
}
string readNumber()
{
    string num;
    cout << "Enter A nmber: ";
    cin >> num;
    return num;
}
void reverseNumber(string num)
{
    for (int i = num.length(); i >= 0; i--)
    {
        cout << num[i] << endl;
    }
}
/************Main********/
int main()
{

    // multiplication();
    // printISPrimaty(readPositiveNumber());
    // printIsPerfectOrNot(readPositiveNumber());
    // printPerfectNumberFromOneToN(readPositiveNumber());
    reverseNumber(readNumber());
    return 0;
}