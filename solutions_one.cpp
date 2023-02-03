#include <iostream>
#include <string>
using namespace std;
/****** Enums ***************/
enum enNumberType
{
    odd = 1,
    Even = 2
};
/********* Functions *********/

int readNumber()
{
    int number;
    cout << "Enter A Number : ";
    cin >> number;
    return number;
}
enNumberType checkNumberType(int number)
{
    int result = number % 2;
    if (result == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::odd;
    }
}
void printNumberType(enNumberType number)
{
    if (number == enNumberType::Even)
    {
        cout << "The Number You Have Entered was Even" << endl;
    }
    else
    {
        cout << "The Number You Have Entered was Odd" << endl;
    }
}
string readName()
{
    string name;
    cout << "Enter Your Name : ";
    getline(cin, name);
    return name;
}
void printName(string name)
{
    cout << "\nYour Name iS => " << name << endl;
}

int main()
{
    // printName(readName());
    printNumberType(checkNumberType(readNumber()));
    return 0;
}