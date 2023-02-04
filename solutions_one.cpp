#include <iostream>
#include <string>
using namespace std;
/****** Enums ***************/
enum enNumberType
{
    odd = 1,
    Even = 2
};
/********** Structs ************/
struct stInfo
{
    string firstName;
    string lastName;
    short age;
    bool HasDrivingLicense;
    bool HasRecommendation;
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
stInfo readInfo()
{
    stInfo info;
    cout << "Enter Your Age: ";
    cin >> info.age;
    cout << "Enter Your Driver License: ";
    cin >> info.HasDrivingLicense;
    cout << "Do You Have Any Recommendation: ";
    cin >> info.HasRecommendation;
    return info;
}
bool isAccepted(stInfo info)
{
    if (info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (info.age > 21 && info.HasDrivingLicense);
    }
}
void printResult(stInfo info)
{
    if (isAccepted(info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejected" << endl;
}
stInfo readFullName()
{
    stInfo info;
    cout << "Enter Your FirstName: ";
    cin >> info.firstName;
    cout << "Enter Your Second Name: ";
    cin >> info.lastName;

    return info;
}
string getFullName(stInfo name, bool reversed)
{
    string fullName;
    if (reversed)
        fullName = name.lastName + " " + name.firstName;
    else
        fullName = name.firstName + " " + name.lastName;

    return fullName;
}
void printFullName(string fullName)
{
    cout << "Your Full Name is => " << fullName << endl;
}
int main()
{
    // printName(readName());
    // printNumberType(checkNumberType(readNumber()));
    // printResult(readInfo());
    printFullName(getFullName(readFullName(), true));
    return 0;
}