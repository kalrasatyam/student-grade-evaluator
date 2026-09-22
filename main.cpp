#include <iostream>

using namespace std;

int main() {
    string name;
    string rollNo;
    float sub1, sub2, sub3;
    float attendance;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks for 3 subjects (out of 100):\n";
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    // Check for invalid input
    if (sub1 < 0 || sub1 > 100 || sub2 < 0 || sub2 > 100 || sub3 < 0 || sub3 > 100 || attendance < 0 || attendance > 100) {
        cout << "Invalid marks or attendance entered.\n";
        return 0;
    }

    float total = sub1 + sub2 + sub3;
    float avg = total / 3.0;

    char grade;
    if (avg >= 90) {
        grade = 'A';
    } else if (avg >= 80) {
        grade = 'B';
    } else if (avg >= 70) {
        grade = 'C';
    } else if (avg >= 60) {
        grade = 'D';
    } else if (avg >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    cout << "\n Result \n";
    cout << "Name: " << name << "\n";
    cout << "Roll No: " << rollNo << "\n";
    cout << "Result: " << avg<<"%" << "\n";
    cout << "Grade: " << grade << "\n";

    // Pass/fail check
    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        cout << "Status: Passed"<< "\n";
    } else {
        cout << "Status: Failed (scored below 40 in one or more subjects)"<< "\n";
    }

    // Attendance for exams
    if (attendance >= 75) {
        cout << "Exam Eligibility: Eligible\n";
    } else {
        cout << "Exam Eligibility: Not eligible due to low attendance"<< "\n";
    }

    // scholarship check
    if (avg >= 85 && attendance >= 80 && sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        cout << "Scholarship: Eligible"<< "\n";
    } else {
        cout << "Scholarship: Not eligible"<< "\n";
    }

    return 0;
}