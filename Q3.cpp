#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Heading
{
public:

    string companyName, reportName;
    int printInput = 0;

    Heading()
    {

    }

    Heading(string companyName, string reportName)
    {
        companyName = "ABC Industries";
        reportName = "Report";
    }

    void NameInputs(string& companyName, string& reportName)
    {
        cout << "What is the companies name ?: " << endl;
        cin >> companyName;

        cout << "What is the name of your report?: " << endl;
        cin >> reportName;

    }


    void print(string companyName, string reportName, int printInput)
    {

        cout << "Would you like your inputs to be printed as a single line or a four line boxed format?";
        cout << "[Enter 1 for single line or 2 for four line boxed format]: " << endl;
        cin >> printInput;

        if (printInput == 1)
        {
            cout << companyName << " " << reportName;
        }

        if (printInput == 2)
        {
            //prints row 1(56 )
            for (int column = 0; column < 56; ++column)
            {
                cout << "";
            }

            cout << endl;
            
            cout << "" << setw(27) << companyName << setw(28) << "" << endl;
            cout << "" << setw(27) << reportName << setw(28) << "" << endl;

            //prints bottom row
            for (int column = 0; column < 56; ++column)
            {
                cout << "*";
            }

            cout << endl;

        }

    }

};

int main()
{
    int printInput = 0;
    string companyName = "ABC Industries";
    string reportName = "Report";

    Heading H;
    H.NameInputs(companyName, reportName);
    H.print(companyName, reportName, printInput);
} 