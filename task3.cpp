#include <iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
    string month;
    int day;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    cout << "Zodiac Sign: " <<findZodiacSign(day, month);
    return 0;
}

string findZodiacSign(int day, string month) {
    string sign;

    if ((month == "March" && day >= 21) || (month == "April" && day <= 19)) {
        sign = "Aries";
    } else if ((month == "April" && day >= 20) || (month == "May" && day <= 20)) {
        sign = "Taurus";
    } else if ((month == "May" && day >= 21) || (month == "June" && day <= 20)) {
        sign = "Gemini";
    } else if ((month == "June" && day >= 21) || (month == "July" && day <= 22)) {
        sign = "Cancer";
    } else if ((month == "July" && day >= 23) || (month == "August" && day <= 22)) {
        sign = "Leo";
    } else if ((month == "August" && day >= 23) || (month == "September" && day <= 22)) {
        sign = "Virgo";
    } else if ((month == "September" && day >= 23) || (month == "October" && day <= 22)) {
        sign = "Libra";
    } else if ((month == "October" && day >= 23) || (month == "November" && day <= 21)) {
        sign = "Scorpio";
    } else if ((month == "November" && day >= 22) || (month == "December" && day <= 21)) {
        sign = "Sagittarius";
    } else if ((month == "December" && day >= 22) || (month == "January" && day <= 19)) {
        sign = "Capricorn";
    } else if ((month == "January" && day >= 20) || (month == "February" && day <= 18)) {
        sign = "Aquarius";
    } else {
        sign = "Pisces";
    }

    return sign;
}
