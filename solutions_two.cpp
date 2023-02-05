#include <iostream>
#include <string>
using namespace std;
void readNumbers(float &a, float &b)
{
    cout << "Enter A Number : ";
    cin >> a;
    cout << "Enter B Number: ";
    cin >> b;
}
float calculateTriangleArea(float a, float b)
{
    return a * b;
}
void printTrangleArea(float result)
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
using namespace std;

int main()
{
    float a, b; // here is a vars to send it by reffferance
    // readNumbers(a, b);
    // printTrangleArea(calculateTriangleArea(a, b));
    swap(a, b);
    return 0;
}