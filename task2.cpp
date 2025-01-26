#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 1; i <= numStudents; i++) {
        string name;
        int pf, oop, dld, ict, totalMarks;
        double averageMarks;
        char grade;

        cout << "\nEnter details for student " << i << ":\n";
        cout << "Name: ";
        cin.ignore(); 
        getline(cin, name);

        cout << "Marks in PF: ";
        cin >> pf;
        cout << "Marks in OOP: ";
        cin >> oop;
        cout << "Marks in DLD: ";
        cin >> dld;
        cout << "Marks in ICT: ";
        cin >> ict;
        totalMarks = pf + oop + dld + ict;
        averageMarks = totalMarks / 4.0;
        if (averageMarks >= 90) {
            grade = 'A';
        } else if (averageMarks >= 80) {
            grade = 'B';
        } else if (averageMarks >= 70) {
            grade = 'C';
        } else if (averageMarks >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "\nStudent Report:\n";
        cout << "Name: " << name << "\n";
        cout << "Total Marks: " << totalMarks << "\n";
        cout << "Average Marks: " << averageMarks << "\n";
        cout << "Grade: " << grade << "\n";
    }

    return 0;
}
