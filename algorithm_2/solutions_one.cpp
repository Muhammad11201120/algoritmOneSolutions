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
void printDigits(int number)
{
    int reminder = 0; // to srtore last digit.
    while (number > 0)
    {
        reminder = number % 10; //  store last digit in reminder.
        number = number / 10;   // cut last digit
        cout << reminder << endl;
    }
}
/************Main********/
int main()
{

    // multiplication();
    // printISPrimaty(readPositiveNumber());
    // printIsPerfectOrNot(readPositiveNumber());
    // printPerfectNumberFromOneToN(readPositiveNumber());
    // reverseNumber(readNumber());
    printDigits(readPositiveNumber());
    return 0;
}