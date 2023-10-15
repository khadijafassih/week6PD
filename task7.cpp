#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

int main() {
    int examHour, examMinute, studentHour, studentMinute;
    
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    
    string result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << result;
    
    return 0;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) {
    int examTime = examHour * 60 + examMinute;
    int studentTime = studentHour * 60 + studentMinute;
    int timeDifference = studentTime - examTime;
    
    if (timeDifference < -30) {
        // Student is too early
        int hoursEarly = abs(timeDifference) / 60;
        int minutesEarly = abs(timeDifference) % 60;
        if (hoursEarly == 0) {
            return "Early\n" + to_string(minutesEarly) + " minutes before the start";
        } else {
            return "Early\n" + to_string(hoursEarly) + ":" + (minutesEarly < 10 ? "0" : "") + to_string(minutesEarly) + " hours before the start";
        }
    } else if (timeDifference <= 30) {
        // Student is on time
        return "On time";
    } else {
        // Student is late
        int hoursLate = abs(timeDifference) / 60;
        int minutesLate = abs(timeDifference) % 60;
        if (hoursLate == 0) {
            return "Late\n" + to_string(minutesLate) + " minutes after the start";
        } else {
            return "Late\n" + to_string(hoursLate) + ":" + (minutesLate < 10 ? "0" : "") + to_string(minutesLate) + " hours after the start";
        }
    }
}
