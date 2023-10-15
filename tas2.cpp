#include <iostream>
#include <string>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

int main() {
    string name;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;
    
    cout << "Enter student name: ";
    cin >> name;
    
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks for Biology: ";
    cin >> marksBiology;

    float average = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    
    cout << "Student name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << calculateGrade(average) << endl;

    return 0;
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology) {
    float sum = marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology;
    float percentage = (sum / 500.0) * 100;
    return percentage;
}

string calculateGrade(float average) {
    string grade;
    
    if (average >= 90) {
        grade = "A+";
    } else if (average >= 80) {
        grade = "A";
    } else if (average >= 70) {
        grade = "B+";
    } else if (average >= 60) {
        grade = "B";
    } else if (average >= 50) {
        grade = "C";
    } else if (average >= 40) {
        grade = "D";
    } else {
        grade = "F";
    }
    
    return grade;
}
