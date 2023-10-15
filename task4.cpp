#include <iostream>
using namespace std;

int main()
{
    char serviceCode;
    int minutesUsed, time;
    double totalBill;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;
    cout << "Enter the number of minutes used: ";
    cin >> minutesUsed;


    if (serviceCode == 'R' || serviceCode == 'r')
    {
        //cout << "Enter the number of minutes used: ";
        //cin >> minutesUsed;

        if (minutesUsed <= 50)
        {
            totalBill = 10.00;
        }
        else
        {
            totalBill = 10.00 + 0.20 * (minutesUsed - 50);
        }
    }
    else if (serviceCode == 'P' || serviceCode == 'p')
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
        
        
        totalBill = 25.00; // Base cost for premium service
        if (time == 'D' || time == 'd')
            if (minutesUsed > 75)
            {
                totalBill += 0.10 * (minutesUsed - 75);
            }
            else if (time == 'N' || time == 'n')
                if (minutesUsed > 100)
                {
                    totalBill += 0.05 * (minutesUsed - 100);
                }
    }
    else
    {
        cout << "Invalid service code. Please enter R/r for Regular or P/p for Premium." << endl;
        return 1; // Exit the program with an error code.
    }

    cout << "Service Type: " << serviceCode<< endl;    
    cout << "Total Minutes Used: " << minutesUsed << " minutes" << endl;
    cout << "Amount Due: $" << totalBill << endl;

    return 0;
}
