#include <iostream>
using namespace std;

void shuma() {
    cout << "shuma" << endl;
}

double shume(double first_num) {
    return first_num + first_num + first_num; 
}

int main() {
    shuma();
    cout << shume(5.5) << endl; 
    cout << shume(5) << endl;  
    return 0;
}