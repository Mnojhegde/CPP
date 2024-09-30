#include <string>
#include <iostream>

using namespace std;

class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
        
        string getName() {
            return name;
        }
        
        int getAge() {
            return age;
        }

        virtual void print_info() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }

    private:
        string name;
        int age;
};

class Student : public Person {
    public:
        Student(string name, int age, string department) : Person(name, age) {
            this->department = department;
        }

        void print_info() override {
            cout << "Name: " << getName() << ", Age: " << getAge() << ", Department: " << department << endl;
        }

    private:
        string department;
};

int main() {
    Student student("abcv", 22, "Computer Science");
    student.print_info();

    return 0;
}

