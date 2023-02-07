#include <iostream>
#include <string>
using namespace std;
/***********Structs****************/
struct stTaskDuration
{
    float days, hours, minutes, seconds;
};

/*************Fuctions***************/
float readNumber(string msg)
{
    float number = 0;
    cout << msg;
    cin >> number;
    return number;
}
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

float calculateNumberOfDays(float &hours)
{
    float days = 0;
    days = hours / 24;
    return days;
}
float calculateNumberOfWeeks(float days)
{
    float weeks = calculateNumberOfDays(days) / 7;

    return weeks;
}
stTaskDuration readTaskDuration()
{
    stTaskDuration taskDuration;
    taskDuration.days = readNumber("Enter Days: ");
    taskDuration.hours = readNumber("Enter Hours: ");
    taskDuration.minutes = readNumber("Enter Minutes: ");
    taskDuration.seconds = readNumber("Enter Seconds: ");
    return taskDuration;
}
float calculateSeconds(stTaskDuration taskDuration)
{
    return taskDuration.seconds = taskDuration.seconds + taskDuration.minutes * 60 + taskDuration.hours * 60 * 60 + taskDuration.days * 60 * 60 * 24;
}

/*************Main****************/
int main()
{
    // float hours = readNumber("Enter Number Of Hours: ");

    // cout << "You Have Worked => ( " << calculateNumberOfDays(hours) << " ) Days." << endl;
    // cout << "You Have Worked => ( " << calculateNumberOfWeeks(hours) << " ) Weeks." << endl;
    stTaskDuration taskDuration = readTaskDuration();
    cout << "Working Seconds Are => " << calculateSeconds(taskDuration) << endl;
    return 0;
}