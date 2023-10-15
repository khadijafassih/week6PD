#include <iostream>
using namespace std;
string decideActivity(string temperature, string humidity);

main()
{
    string temperature, humidity;
    cout << "Enter temperture (warm or cold): ";
    cin >> temperature;
    cout << "Enter humidity (dry or humid): ";
    cin >> humidity;
    cout << "Recommended activity: " << decideActivity(temperature, humidity);
    return 0;
}

string decideActivity(string temperature, string humidity)
{
    string activity;
    if (temperature == "warm" && humidity == "dry")
    {
        activity = " Play tennis";
    }
    if (temperature == "warm" && humidity == "humid")
    {
        activity = " Swim";
    }
    if (temperature == "cold" && humidity == "dry")
    {
        activity = " Play basketball";
    }
    if (temperature == "cold" && humidity == "humid")  
           { activity = " Watch tv";}

    return activity;
}