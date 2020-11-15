#include <iostream>
using namespace std;

class Date {

public: 
	
	int Month, Day, Year;

	Date(int Month, int Day, int Year)
	{
		Date::Month = 1;
		Date::Day = 1;
		Date::Year = 2001;
	};

	void InputDate()
	{
		cout << "Enter the Month : "; cin >> Month;
		cout << "Enter the Day : "; cin >> Day;
		cout << "Enter the Year : "; cin >> Year;

		if (Month < 0 || Month > 12 || Day < 0 || Day > 31 || Year < 2001 || Year > 2020)
		{
			Month = 1;
			Day = 1;
			Year = 2001;

		}
	}

	void Print()
	{
		string monthname[12] = { "January","February","March","April","May","June","July",
     "August","September","October","November","December" };
	

		cout << Month << "/" << Day << "/" << Year;
		cout << endl;
		cout << monthname[Month - 1] << " " << Day << ", " << Year << endl;
		cout << Day << " " << monthname[Month - 1] << " " << Year << std::endl;
	}
};

int main()
{
	int Month = 0, Day = 0, Year = 0;
	Date D(Month, Day, Year);
	Date(Month, Day, Year);
	D.InputDate();
	D.Print();
}