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

class Teacher : public Person {
    public:
        Teacher(string name, int age, double salary) : Person(name, age) {
            this->salary = salary;
        }

        void print_info() override {
            cout << "Name: " << getName() << ", Age: " << getAge() << ", Salary: $" << salary << endl;
        }

    private:
        double salary;
};

int main() {
    Teacher teacher("Mr. Abcv", 22, 19800.0);
    teacher.print_info();

    return 0;
}

