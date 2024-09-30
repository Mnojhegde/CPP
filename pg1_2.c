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
        
        void print_info() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }

    private:
        string name;
        int age;
};

int main() {
   
    Person person1("abcv", 25);
    Person person2("bcbv", 40);
    
  
    person1.print_info();
    person2.print_info();

    return 0;
}

