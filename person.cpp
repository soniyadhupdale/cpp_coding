#include <iostream>
#include <string>

using namespace std;

class Person 
{
private:
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
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating a Person object
    Person person("John", 25);

    // Displaying initial information
    cout << "Initial Information:" << endl;
    person.display();

    // Modifying person's name and age
    person.setName("Alice");
    person.setAge(30);

    // Displaying updated information
    cout << "\nUpdated Information:" << endl;
    person.display();

    return 0;
}
