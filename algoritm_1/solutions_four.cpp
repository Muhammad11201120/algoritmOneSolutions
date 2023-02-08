#include <iostream>
#include <string>
using namespace std;

/************Enums**********************/
enum enDayOfWeeks
{
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thuresday = 5,
    friday = 6,
    saturday = 7
};
enum enMonthOfYear
{
    Jan = 1,
    Feb = 2,
    Mar = 3,
    Apr = 4,
    May = 5,
    Jun = 6,
    Jul = 7,
    Aug = 8,
    Sep = 9,
    Oct = 10,
    Nov = 11,
    Dec = 12
};
enum enAsciiCode
{
    CAPITALL_START = 65,
    CAPITAL_END = 90,
};
/***********Structs********************/
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
    float durationInSeconds = taskDuration.days * 60 * 60 * 24;
    durationInSeconds += taskDuration.hours * 60 * 60;
    durationInSeconds += taskDuration.minutes * 60;
    durationInSeconds += taskDuration.seconds;
    return durationInSeconds;
}
stTaskDuration calculateTaskDurationToDaysHoursMinsSeconds(int seconds)
{
    stTaskDuration taskDuration;
    const int SECONDSPERDAY = 24 * 60 * 60;
    const int SECONDSPERHOUR = 60 * 60;
    const int SECONDSPERMINUTES = 60;
    int remindder = 0;
    taskDuration.days = (seconds / SECONDSPERDAY);
    remindder = seconds % SECONDSPERDAY;
    taskDuration.hours = (remindder / SECONDSPERHOUR);
    remindder %= SECONDSPERHOUR;
    taskDuration.minutes = (remindder / SECONDSPERMINUTES);
    remindder %= SECONDSPERMINUTES;
    taskDuration.seconds = remindder;

    return taskDuration;
}
void printTaskDurationDaysHoursMinutesSeconds(stTaskDuration taskDuration)
{
    cout << "\n*****************************\n\n";
    cout << taskDuration.days << ":" << taskDuration.hours << ":" << taskDuration.minutes << ":" << taskDuration.seconds << endl;
    cout << "\n*****************************\n";
}
string checkDay(int day)
{
    switch (day)
    {
    case enDayOfWeeks::sunday:
        return "Sunday";
    case enDayOfWeeks::monday:
        return "Monday";
    case enDayOfWeeks::tuesday:
        return "Tuesday";
    case enDayOfWeeks::wednesday:
        return "Wednesday";
    case enDayOfWeeks::thuresday:
        return "Thuresday";
    case enDayOfWeeks::friday:
        return "Friday";
    case enDayOfWeeks::saturday:
        return "Saturday";
    default:
        return "You Have Entered Wrong Day Number ..";
    }
}
string checkMonth(int month)
{
    switch (month)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "June";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "Septemper";
    case enMonthOfYear::Oct:
        return "Octoper";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";
    default:
        return "You Have Entered Wrong Month Number ..";
    }
}
void printLeetersFromAToZ()
{
    for (short i = enAsciiCode::CAPITALL_START; i <= enAsciiCode::CAPITAL_END; i++)
    {
        cout << "Letter => " << char(i) << endl;
    }
}
float calcualteLoanMonths(float &loanAmoount, float &loanPayment)
{
    return loanAmoount / loanPayment;
}
float calcualteLoanPayment(float &loanAmoount, float &loanMonths)
{
    return loanAmoount / loanMonths;
}
bool checkAtmSecretKey()
{
    int secretKey;
    short counter = 3;
    do
    {
        counter--;
        int secretKey = readNumber("Enter your PIN: ");
        if (secretKey == 1234)
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin..\n";
            system("color 4f");
        }

    } while (counter >= 1 && secretKey != 1234);
    return 0;
}
/*************Main****************/
int main()
{
    // float hours = readNumber("Enter Number Of Hours: ");

    // cout << "You Have Worked => ( " << calculateNumberOfDays(hours) << " ) Days." << endl;
    // cout << "You Have Worked => ( " << calculateNumberOfWeeks(hours) << " ) Weeks." << endl;
    // stTaskDuration taskDuration = readTaskDuration();
    // cout << "Working Seconds Are => " << calculateSeconds(taskDuration) << endl;
    // int taskDuration = readNumber("Enter Task Duration With Seconds: ");
    // printTaskDurationDaysHoursMinutesSeconds(calculateTaskDurationToDaysHoursMinsSeconds(taskDuration));
    // int day = readNumber("Enter Positive Day Number From 1 to 7: ");
    // cout << "The Day is => " << checkDay(day) << endl;
    // int month = readNumber("Enter Positive Mont Number From 1 to 12: ");
    // cout << "The Day is => " << checkMonth(month) << endl;
    // printLeetersFromAToZ();
    // float loanAmount = readNumber("How Much The Loan: ");
    // float loanPayment = readNumber("How Much You Will PAy Per Month?: ");
    // cout << "You Will Finish The Loan In => (" << calcualteLoanMonths(loanAmount, loanPayment) << ") Months" << endl;
    // float loanAmount = readNumber("How Much The Loan: ");
    // float loanMonths = readNumber("How Much You Will PAy Per Month?: ");
    // cout << "You Will Pay => (" << calcualteLoanPayment(loanAmount, loanMonths) << " $)  Per Month" << endl;

    // if (checkAtmSecretKey())
    // {
    //     system("color 2f");
    //     cout << "\nYour Balance is 7500 " << endl;
    // };
    return 0;
}