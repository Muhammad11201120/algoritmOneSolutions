#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/**********Functions**********/
float readNumber()
{
    float a;
    do
    {
        cout << "Enter A Number : ";
        cin >> a;
    } while (a < 0);

    return a;
}
void readNumbers(float &a, float &b)
{
    do
    {
        cout << "Enter A Number : ";
        cin >> a;
        cout << "Enter B Number: ";
        cin >> b;
    } while (a < 0 || b < 0);
}
float calculateFactorialOfNumber(float number)
{
    float result = 1;
    for (int i = number; i >= 2; i--)
    {
        result *= i;
    }
    return result;
}
void printFactorialOfNumber(float result)
{
    cout << "The Factorial is => " << result << endl;
}
void powerOfThreeNumbers(float number)
{
    for (short i = 1; i <= number; i++)
    {
        cout << "(" << number << ") "
             << "Power OF (" << i << ") => " << pow(number, i) << endl;
    }
}
float calculatePwoerOfM(float a, float b)
{
    return pow(a, b);
}
void printPwoerOfM(float result)
{
    cout << "Result is = > (" << result << ")" << endl;
}
float calculatePower(float number, float pwoer)
{
    float result = 1;
    if (pwoer == 1)
    {
        return 1;
    }
    for (int i = 1; i <= pwoer; i++)
    {
        result *= number;
    }
    return result;
}
short readGrade(short from, short to)
{
    short grade;
    do
    {
        cout << "Enter Your Grade: ";
        cin >> grade;
    } while (grade < from || grade > to);
    return grade;
}
char checkGrade(short grade)
{
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'D';
    else
        return 'F';
}
void printResult(char result)
{
    cout << "You Got => " << result << endl;
}
float readToltalSaales()
{
    float totalSales = 0;
    cout << "Enter Total Sales: ";
    cin >> totalSales;
    return totalSales;
}
float getCommissionPercentage(float totalSales)
{
    if (totalSales >= 1000000)
        return 0.01;
    if (totalSales >= 500000)
        return 0.02;
    if (totalSales >= 100000)
        return 0.03;
    if (totalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}
float calculateTotallCommission(float totalSales)
{
    return getCommissionPercentage(totalSales) * totalSales;
}
float readInputs()
{
    float penny, nickle, dime, quarter, dollar;
    cout << "How Many Pennies: ";
    cin >> penny;
    cout << "How Many Nickles: ";
    cin >> nickle;
    cout << "How Many Dimes: ";
    cin >> dime;
    cout << "How Many Quarters: ";
    cin >> quarter;
    cout << "How Many Dollars: ";
    cin >> dollar;
}
float calculatePennies(float penny, float nickle, float dime, float quarter, float dollar)
    /***********’Main*********/
    int main()
{
    float a, b;
    // printFactorialOfNumber(calculateFactorialOfNumber(readNumber()));
    // powerOfThreeNumbers(readNumber());
    // readNumbers(a, b);
    // printPwoerOfM(calculatePwoerOfM(a, b));
    // printPwoerOfM(calculatePower(readNumber(), readNumber()));
    // short grade = readGrade(0, 100);
    // printResult(checkGrade(grade));
    // float totalSales = readToltalSaales();
    // cout << "your Commission is => " << getCommissionPercentage(totalSales) << endl;
    // cout << "Your Commission Percentage is => " << calculateTotallCommission(totalSales) << endl;
    return 0;
}