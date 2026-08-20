#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int age;

public:
    string name;

    void setAge(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person first_person;
    first_person.name = "Arti";
    first_person.setAge(19);

    cout << "Emri: " << first_person.name << endl;
    cout << "Mosha: " << first_person.getAge() << endl;

    return 0;
}