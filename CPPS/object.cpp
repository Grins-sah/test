#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

// Class definition
class Student {
public:                // Access specifier
    string name;        // Attribute: name of the student
    int age;            // Attribute: age of the student
    int rollNumber;     // Attribute: roll number of the student
    float marks;        // Attribute: marks obtained by the student

    // Method: Display student details
    void displayDetails() {
        cout << "Name: " << name 
             << ", Age: " << age 
             << ", Roll Number: " << rollNumber 
             << ", Marks: " << marks 
             << ", Grade: " << calculateGrade() 
             << endl;
    }

    // Method: Calculate grade based on marks
    string calculateGrade() {
        if (marks >= 90) {
            return "A"; // Grade A
        } else if (marks >= 80) {
            return "B"; // Grade B
        } else if (marks >= 70) {
            return "C"; // Grade C
        } else if (marks >= 60) {
            return "D"; // Grade D
        } else {
            return "F"; // Grade F
        }
    }
};

int main() {
    // Creating objects of the Student class
    Student student1;          // Object 1
    Student student2;          // Object 2
    Student student3;          // Object 3

    // Setting attributes directly in main for student1
    student1.name = "Alice";
    student1.age = 20;
    student1.rollNumber = 101;
    student1.marks = 85.5; // Setting marks for student1

    student1.displayDetails(); // Display details for student1

    // Setting attributes for student2
    student2.name = "Bob";
    student2.age = 22;
    student2.rollNumber = 102;
    student2.marks = 92.0; // Setting marks for student2
    
    student2.displayDetails(); // Display details for student2

    // Setting attributes for student3
    student3.name = "Charlie";
    student3.age = 19;
    student3.rollNumber = 103;
    student3.marks = 75.0; // Setting marks for student3
    
    student3.displayDetails(); // Display details for student3
    return 0;
}