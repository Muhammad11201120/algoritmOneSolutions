
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void readNumbers(float &a, float &b)
{
    cout << "Enter A Number : ";
    cin >> a;
    cout << "Enter B Number: ";
    cin >> b;
}
void readNumber(float &a)
{
    cout << "Enter A Number : ";
    cin >> a;
}
float calculateRectangleArea(float a, float b)
{
    return a * b;
}
void printRectangleArea(float result)
{
    cout << "The Area Of The Rectangle is => " << result << endl;
}
void swap(float &a, float &b)
{
    readNumbers(a, b);
    float temp;
    cout << "Number 1 Before Swapping => " << a << endl;
    cout << "Number 2 Before Swapping => " << b << endl;
    temp = a;
    a = b;
    b = temp;

    cout << "Number 1 After Swapping => " << a << endl;
    cout << "Number 2 After Swapping => " << b << endl;
}
float calculateRectangleAreaThroughDiagonal(float &a, float &b)
{
    return a * sqrt(b * b - a * a);
}
void printRectangleAreaThroughDiagonal(float area)
{
    cout << "The Area Of The Triangle is => " << area << endl;
}
float calculateTriangleArea(float &a, float &b)
{
    return a / 2 * b;
}
void printTriangleArea(float area)
{
    cout << "The Area Of Triangle is => " << area << endl;
}
float calculateCircleArea(float &a)
{
    return 3.14 * pow(a, 2);
}
void printCircleArea(float area)
{
    cout << "Area Of The Circle is => " << area << endl;
}
float readDiameter()
{
    float d;
    cout << "Enter The Diameter: ";
    cin >> d;
    return d;
}
float calculateCircleAreaThroughDiameter(float d)
{
    return (3.14 * pow(d, 2)) / 4;
}
void printCircleAreaThroughDiameter(float area)
{
    cout << "The Area Of The Circle Through Diameter is => " << area << endl;
}
float readCircleAreaInscribedInASquare()
{
    float a;
    cout << "Enter A of Square: ";
    cin >> a;
    return a;
}
float calculateCircleAreaInscribedInSquare(float a)
{
    return 3.14 * (pow(a / 2, 2));
}
void printCircleAreaInscribedInSquare(float area)
{
    cout << "Area Of The Circle is => " << area << endl;
}
float readTheCircumference()
{
    float l;
    cout << "Enter L Of The Circum: ";
    cin >> l;
    return l;
}
float calculateCircleAreaAlongTheCircumference(float l)
{
    return pow(l, 2) / (4 * 3.14);
}
void printCircleAreaAlongTheCircumference(float area)
{
    cout << "The Area Of the Circle is => " << area << endl;
}
float calculateCircleAreaInscribedInAnIsoscelesTriangle(float &a, float &b)
{
    return 3.14 * (pow(b, 2) / 4) * (2 * a - b) / (2 * a + b);
}
void printCircleAreaInscribedInAnIsoscelesTriangle(float area)
{
    cout << "The Area Of The Circle is => " << area << endl;
}
void readCircleAreaDescribedAroundAnArbitaryTriangle(float &a, float &b, float &c)
{
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
}
float calculateCircleAreaDescribedAroundAnArbitaryTriangle(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return 3.14 * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
}
void printCircleAreaDescribedAroundAnArbitaryTriangle(float area)
{
    cout << "Area Of This Triangle is => " << area << endl;
}
short readAge()
{
    short age;
    cout << "Enter Your Age: ";
    cin >> age;
    return age;
}
bool validateNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}
void printAgeValidation(short age)
{
    if (validateNumberInRange(age, 18, 45))
    {
        cout << "(" << age << ") Years => Valid Age";
    }
    else
    {
        cout << "(" << age << ") Years => Invalid Age";
    }
}
short readAgeUntilBetween(short from, short to)
{
    short age = 0;
    do
    {
        age = readAge();

    } while (!validateNumberInRange(age, 18, 45));

    return age;
}
void printAgeResult(short age)
{
    cout << "You Are Valid";
}
int readN()
{
    int n;
    cout << "Enter A Number To Count From  : ";
    cin >> n;
    return n;
}
void printNumberFromOneToN(int number)
{

    for (int i = 1; i <= number; i++)
    {
        cout << "Number => " << i << endl;
    }
}
void printNumbersFromNToOne(int number)
{
    for (int i = number; i >= 1; i--)
    {
        cout << "Number => " << i << endl;
    }
}
int calculateOddFromOneToN(int number)
{
    int result = 0;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            result += i;
        }
    }
    return result;
}
void printSumOddToN(int result)
{
    cout << "Result Of Odd Sum => " << result << endl;
}
int main()
{
    float a, b, c; // here is a vars to send it by reffferance
                   // readNumbers(a, b);
                   // printrectangleArea(calculateTriangleArea(a, b));
                   // swap(a, b);
                   // readNumbers(a, b);
                   // printRectangleAreaThroughDiagonal(calculateRectangleAreaThroughDiagonal(a, b));
                   // readNumbers(a, b);
                   // printTriangleArea(calculateTriangleArea(a, b));
                   // readNumber(a);
                   // printCircleArea(calculateCircleArea(a));
                   // printCircleAreaThroughDiameter(calculateCircleAreaThroughDiameter(readDiameter()));
                   // printCircleAreaInscribedInSquare(calculateCircleAreaInscribedInSquare(readCircleAreaInscribedInASquare()));
                   // printCircleAreaAlongTheCircumference(calculateCircleAreaAlongTheCircumference(readTheCircumference()));
                   // readNumbers(a, b);
                   // printCircleAreaInscribedInAnIsoscelesTriangle(calculateCircleAreaInscribedInAnIsoscelesTriangle(a, b));
                   // readCircleAreaDescribedAroundAnArbitaryTriangle(a, b, c);
                   // printCircleAreaDescribedAroundAnArbitaryTriangle(calculateCircleAreaDescribedAroundAnArbitaryTriangle(a, b, c));
                   // printAgeValidation(readAge());
                   // printAgeResult(readAgeUntilBetween(18, 45));
                   // printNumberFromOneToN(readN());
    // printNumbersFromNToOne(readN());
    printSumOddToN(calculateOddFromOneToN(readN()));
    return 0;
}