#include <iostream>

using namespace std;

class Date
{
public:

    int month, day, year;

    Date(int month, int day, int year)
    {
        Date::month = 1;
        Date::day = 1;
        Date::year = 2001;

        cout << "The Constructor function is executed" << endl;
    }



    void InputDate(int& month, int& day, int& year)
    {

        cout << "Enter the month(between 1 and 12): ";
        cin >> month;

        cout << "Enter the day(between 1 and 31): ";
        cin >> day;

        cout << "Enter the year: ";
        cin >> year;

        if (month <= 0 || month > 12 || day > 31 || day < 1 || year < 2001)
        {
            month = 1;
            day = 1;
            year = 2001;
        }

    }

    void print(int month, int day, int year)
    {
        string monthName[12] = { "January","February","March","April","May","June","July",
        "August","September","October","November","December" };

        cout << month << "/" << day << "/" << year << endl;
        cout << monthName[month - 1] << " " << day << ", " << year << endl;
        cout << day << " " << monthName[month - 1] << " " << year << endl;
    }

    void f(Date& Date)
    {
        print(month, day, year);
    }

    void g(Date Date)
    {
        print(month, day, year);
    }
};

int main()
{
    int month = 1, day = 1, year = 2001;

    Date D(month, day, year);
    Date(month, day, year);
    D.f(D);
    D.g(D);
    D.InputDate(month, day, year);
    D.print(month, day, year);

    return 0;

}