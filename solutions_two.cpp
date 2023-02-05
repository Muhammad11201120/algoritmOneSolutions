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
float calculateCircleAreaInscribedInAnIsoscelesTriangle(float a, float b)
{
    return 3.14 * (pow(b, 2) / 4) * (2 * (a - b)) / (2 * (a + b));
}
void printCircleAreaInscribedInAnIsoscelesTriangle(float area)
{
    cout << "The Area Of The Circle is => " << area << endl;
}
int main()
{
    float a, b; // here is a vars to send it by reffferance
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
    readNumbers(a, b);
    printCircleAreaInscribedInAnIsoscelesTriangle(calculateCircleAreaInscribedInAnIsoscelesTriangle(a, b));
    return 0;
}