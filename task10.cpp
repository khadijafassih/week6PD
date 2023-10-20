#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printBackground();
void printEnemy();
void eraseEnemy();
void moveEnemy1(string direction);
void printEnemy1();
void eraseEnemy1();
void moveEnemy(string direction);
string changeDirection(string direction);
string changeDirection1(string direction);
char getCharAtxy(short int x, short int y);
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();

int eX = 85, eY = 19;
int e1X = 90, e1Y = 19;
int pX = 4, pY = 4;
int main()
{

    system("cls");
    printBackground();
    printPlayer();
    printEnemy();
    string enemyDirection = "left";
    while (true)
    {
        printPlayer();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        moveEnemy(enemyDirection);
        enemyDirection = changeDirection(enemyDirection);
        moveEnemy1(enemyDirection);
        enemyDirection = changeDirection1(enemyDirection);

        Sleep(300);
    }

    return 0;
}

void printBackground()
{
    cout << "************************************************************************************************************************************************************************\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                                                                                                                                                      *\n";
    cout << "*                                 +                                                                                                                                    *\n";
    cout << "*                                +++                                                              -------                                                              *\n";
    cout << "*                  +            +++++                                                            /       \\                                                   +         *\n";
    cout << "*                 +++          +++++++                                                          /         \\                                                 +++        *\n";
    cout << "*                +++++           | |                                                           |  O     O  |                                                +++++      *\n";
    cout << "*                 | |            | |                                                           |           |                                                 | |       *\n";
    cout << "************************************************************************************************************************************************************************\n";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printEnemy()
{
    gotoxy(eX, eY);
    cout << "  O  \n"; // 5
    gotoxy(eX, eY + 1);
    cout << " [ ] \n";
    gotoxy(eX, eY + 2);
    cout << " / \\ \n"; // 5
}

void eraseEnemy()
{
    gotoxy(eX, eY);
    cout << "     \n"; // 5
    gotoxy(eX, eY + 1);
    cout << "     \n";
    gotoxy(eX, eY + 2);
    cout << "     \n"; // 5
}

string changeDirection(string direction)
{

    if (direction == "right" && eX >= 80)
    {
        direction = "left";
    }
    if (direction == "left" && eX <= 39)
    {
        direction = "right";
    }
    return direction;
}
void moveEnemy(string direction)
{

    eraseEnemy();
    if (direction == "right")
    {
        eX = eX + 1;
    }
    if (direction == "left")
    {
        eX = eX - 1;
    }
    printEnemy();
}
string changeDirection1(string direction)
{

    if (direction == "right" && e1X >= 90)
    {
        direction = "left";
    }
    if (direction == "left" && e1X >= 90)
    {
        direction = "right";
    }
    return direction;
}

void printEnemy1()
{
    gotoxy(e1X, e1Y);
    cout << "  O  \n"; // 5
    gotoxy(e1X, e1Y + 1);
    cout << " [ ] \n";
    gotoxy(e1X, e1Y + 2);
    cout << " / \\ \n"; // 5
}

void eraseEnemy1()
{
    gotoxy(e1X, e1Y);
    cout << "     \n"; // 5
    gotoxy(e1X, e1Y + 1);
    cout << "     \n";
    gotoxy(e1X, e1Y + 2);
    cout << "     \n"; // 5
}

void moveEnemy1(string direction)
{

    eraseEnemy1();
    if (direction == "right")
    {
        e1X = e1X + 1;
    }
    if (direction == "left")
    {
        e1X = e1X - 1;
    }
    printEnemy1();
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void printPlayer()
{
    gotoxy(pX, pY);
    cout << "        ******************\n";
    gotoxy(pX, pY + 1);
    cout << "             |||||||      \n";
    gotoxy(pX, pY + 2);
    cout << "-------   **************  \n";
    gotoxy(pX, pY + 3);
    cout << "  ||____******************\n";
    gotoxy(pX, pY + 4);
    cout << "  | ____***| |******| |***\n";
    gotoxy(pX, pY + 5);
    cout << "        ******************\n";
    gotoxy(pX, pY + 5);
    cout << "          **************  \n";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "                          \n";
    gotoxy(pX, pY + 1);
    cout << "                          \n";
    gotoxy(pX, pY + 2);
    cout << "                          \n";
    gotoxy(pX, pY + 3);
    cout << "                          \n";
    gotoxy(pX, pY + 4);
    cout << "                          \n";
    gotoxy(pX, pY + 5);
    cout << "                          \n";
    gotoxy(pX, pY + 5);
    cout << "                          \n";
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}

void movePlayerRight()
{
    if (getCharAtxy(pX + 26, pY) == ' ')
    {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}