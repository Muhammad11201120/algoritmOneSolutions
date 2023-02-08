#include <iostream>
#include <string>
using namespace std;
/*********Enums************/
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

/************Main********/
int main()
{

    // multiplication();

    return 0;
}