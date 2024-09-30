#include <string>
#include <iostream>

using namespace std;

class Person {
    public:
        // Constructor that takes name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        
        // Getter for name
        string getName() {
            return name;
        }
        
        // Getter for age
        int getAge() {
            return age;
        }
        
        // Method to print info about the person
        void print_info() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }

    private:
        // Private attributes
        string name;
        int age;
};

int main() {
    Person person("Alice", 25);
    
    
    cout << person.getName() << endl;  // This works
    cout << person.getAge() << endl;   // This works
    
    person.print_info();

    return 0;
}

