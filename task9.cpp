#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y);

int main()
{
    int h, x, y;
    cout << "Enter height";
    cin >> h;
    cout << "Enter x coordinate";
    cin >> x;
    cout << "Enter y coordinate";
    cin >> y;
    string result = checkPointPosition(h, x, y);
    cout << result << endl;
    return 0;
}

string checkPointPosition(int h, int x, int y)
{
    bool inside = (x >= 0 && x <= 2 * h && y >= 0 && y <= 4 * h);
    bool onBorder = (x == 0 || x == 2 * h || y == 0 || y == 4 * h);

    if (inside)
    {
        return "Inside";
    }
    else if (onBorder)
    {
        return "Border";
    }
    else
    {
        return "Outside";
    }
}
