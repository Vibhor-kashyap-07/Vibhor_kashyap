#include <iostream>
#include <string>

class Student; // Forward declaration

// Friend function to display student details
void displayStudentDetails(const Student& student);

class Student {
private:
    std::string name;
    int age;
    std::string department;
    std::string course;

public:
    // Constructor to initialize student details
    Student(const std::string& n, int a, const std::string& dep, const std::string& c)
        : name(n), age(a), department(dep), course(c) {}

    // Friend function declaration
    friend void displayStudentDetails(const Student& student);
};

// Friend function definition
void displayStudentDetails(const Student& student) {
    std::cout << "Student Details:\n";
    std::cout << "Name: " << student.name << "\n";
    std::cout << "Age: " << student.age << "\n";
    std::cout << "Department: " << student.department << "\n";
    std::cout << "Course: " << student.course << "\n";
}

int main() {
    Student student("Alice", 20, "Computer Science", "Software Engineering");
    displayStudentDetails(student); // Display student details

    return 0;
}
