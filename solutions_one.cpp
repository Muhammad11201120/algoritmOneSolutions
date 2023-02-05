#include <iostream>
#include <string>
using namespace std;
/****** Enums ***************/
enum enNumberType
{
    ODD = 1,
    EVEN = 2
};
enum enPassFail
{
    PASS = 1,
    FAIL = 2
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
        return enNumberType::EVEN;
    }
    else
    {
        return enNumberType::ODD;
    }
}
void printNumberType(enNumberType number)
{
    if (number == enNumberType::EVEN)
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
float calculateNumber(float number)
{
    return number /= 2;
}
void printNumber(int number)
{
    cout << "Half of (" + to_string(number) + ") is => " + to_string(calculateNumber(number)) << endl;
}
int readMark()
{
    int mark;
    cout << "Enter Your Mark: ";
    cin >> mark;
    return mark;
}
enPassFail checkMark(int mark)
{
    if (mark >= 50)
    {
        return enPassFail::PASS;
    }
    else
    {
        return enPassFail::FAIL;
    }
}
void printPassOrFail(int mark)
{
    if (checkMark(mark) == enPassFail::PASS)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
}
int calculateSumNumbers()
{
    int numbers[3];
    int result = 0;

    for (int i = 0; i < 3; i++)
    {
        numbers[i] = readNumber();
        result += numbers[i];
    }
    return result;
}
float AverageOfThreeMarks()
{
    int marks[3];
    float result = 0;

    for (int i = 0; i < 3; i++)
    {
        marks[i] = readMark();
        result += marks[i];
    }
    return result / 3;
}
enPassFail checkAverage(float average)
{

    if (average >= 50)
        return enPassFail::PASS;
    else
        return enPassFail::FAIL;
}
void printSumNumbersResult(int result)
{
    cout << "The Result is => " << result << endl;
}
void printAverageOfThreeNumbersResult(float result)
{
    cout << "The Average  is => " << result << endl;
}
void printPassOrFailAverage(enPassFail result)
{
    if (result == enPassFail::PASS)
        cout << "You Are Passed";
    else
        cout << "You Are Failed";
}
int maxOfTwoNumbers()
{
    int numbers[3];
    for (int i = 0; i < 3; i++)
    {
        numbers[i] = readNumber();
    }
    if (numbers[0] > numbers[1] && numbers[0] > numbers[2])
        return numbers[0];
    else if (numbers[1] > numbers[0] && numbers[1] > numbers[2])
        return numbers[1];
    else if (numbers[2] > numbers[0] && numbers[2] > numbers[1])
        return numbers[2];
    else
        return 0;
}
void printMaxOfTwoNumbers(int number)
{
    cout << "Max Number is => " << number << endl;
}
void printMaxOfThreeNumbers(int number)
{
    if (number)
        cout << "Max Number is => " << number << endl;
    else
        cout << "They Are Equal.." << endl;
}
/************** Main Function **************/

int main()
{
    // printName(readName());
    // printNumberType(checkNumberType(readNumber()));
    // printResult(readInfo());
    // printFullName(getFullName(readFullName(), true));
    // printNumber(readNumber());
    // printPassOrFail(readMark());
    // printSumNumbersResult(calculateSumNumbers());
    // printAverageOfThreeNumbersResult(AverageOfThreeMarks());
    // printPassOrFailAverage(checkAverage(AverageOfThreeMarks()));
    // printMaxOfThreeNumbers(maxOfTwoNumbers());
    return 0;
}