#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Function to set name
    void setName(string n) {
        name = n;
    }

    // Function to set age
    void setAge(int a) {
        age = a;
    }

    // Function to get name
    string getName() {
        return name;
    }

    // Function to get age
    int getAge() {
        return age;
    }

    // Function to display information
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    // Constructor
    Student(string n, int a, int id) : Person(n, a), studentID(id) {}

    // Function to set student ID
    void setStudentID(int id) {
        studentID = id;
    }

    // Function to get student ID
    int getStudentID() {
        return studentID;
    }

    // Function to display information
    void display() override {
        cout << "Name: " << name << ", Age: " << age << ", Student ID: " << studentID << endl;
    }
};

class Employee : public Person {
private:
    string jobTitle;

public:
    // Constructor
    Employee(string n, int a, string title) : Person(n, a), jobTitle(title) {}

    // Function to set job title
    void setJobTitle(string title) {
        jobTitle = title;
    }

    // Function to get job title
    string getJobTitle() {
        return jobTitle;
    }

    // Function to display information
    void display() override {
        cout << "Name: " << name << ", Age: " << age << ", Job Title: " << jobTitle << endl;
    }
};

int main() {
    // Creating a Student object
    Student student("Alice", 20, 12345);

    // Displaying student information
    cout << "Student Information:" << endl;
    student.display();

    // Creating an Employee object
    Employee employee("Bob", 35, "Software Engineer");

    // Displaying employee information
    cout << "\nEmployee Information:" << endl;
    employee.display();

    return 0;
}
