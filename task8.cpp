#include <iostream>
#include <string>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

int main()
{
    string yearType;
    int holidays, hometownWeekends;

    cout << "Enter Year Type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> hometownWeekends;
    int result = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << result << endl;
    return 0;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    holidays = holidays * (2.0 / 3.0);
    float hometownweekends1 = 48 - hometownWeekends;
    float hometownweekends2 = hometownweekends1 * (3.0 / 4.0);
    float result = hometownWeekends + holidays + hometownweekends2;
    if (yearType == "leap")
    {
        float leapYearResult = result + (result * 0.15);
        return leapYearResult;
    }
    else
    {
        return result;
    }
}
