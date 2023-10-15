#include <iostream>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays);

int main()
{
    string month;
    int numberOfStays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;
    string result = calculateHotelPrices(month, numberOfStays);
    if (result != "")
        cout << result;
    return 0;
}

string calculateHotelPrices(string month, int numberOfStays)
{
    float studioPrice, apartmentPrice;

    if (month == "May" || month == "October")
    {
        studioPrice = 50 * numberOfStays;
        apartmentPrice = 65 * numberOfStays;

        if (numberOfStays > 7 && numberOfStays <= 14)
        {
            studioPrice *= 0.95; // 5% discount for studio
        }
        else if (numberOfStays > 14)
        {
            studioPrice *= 0.7;    // 30% discount for studio
            apartmentPrice *= 0.9; // 10% discount for Apartment
        }
    }
    else if (month == "June" || month == "September")
    {
        studioPrice = 75.20 * numberOfStays;
        apartmentPrice = 68.70 * numberOfStays;

        if (numberOfStays > 14)
        {
            studioPrice *= 0.8; // 20% discount for studio
            apartmentPrice *= 0.9; // 10% discount for Apartment
        }
    }
    else if (month == "July" || month == "August")
    {
        studioPrice = 76 * numberOfStays;
        apartmentPrice = 77 * numberOfStays;
        if (numberOfStays > 14)
        {
            apartmentPrice *= 0.9; // 10% discount for Apartment
        }
    }
    else
    {
        return "Invalid month input.";
    }

    return "Apartment: " + to_string(apartmentPrice) + "&.\nStudio: " + to_string(studioPrice) + "$.\n";
}
