#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cars = {"BMW", "Mercedes", "Audi"};

    cout << "Printing the first element by index: "
         << cars[0] << endl;
    cout << "Printing the first element with a library function: "
         << cars.front() << endl << endl;

    cout << "Printing the last element by index: "
         << cars[2] << endl;
    cout << "Printing the last element with a library function: "
         << cars.back() << endl << endl;

    cout << "Printing any element with indexing:" << endl;
    cout << cars[1] << endl;
    cout << cars.at(1) << endl << endl;

    cout << "Printing all elements with a for loop:" << endl;
    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << endl;
    }

    cout << endl << "Printing all elements with a for-each loop:" << endl;
    for (string car : cars) {
        cout << car << endl;
    }

    cout << endl << "Changing element:" << endl;
    cars.at(0) = "Ford";
    for (string car : cars) {
        cout << car << endl;
    }

    return 0;
}