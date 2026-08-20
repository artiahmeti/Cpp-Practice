#include <iostream>
using namespace std;

int main() {
    int readings[5] = {10, 20, 30, 40, 50};
    int *ptr = readings;

    for (int i = 0; i < 5; i++) {
        cout << "Reading " << i + 1 << ": " << *(ptr + i) 
             << " Address: " << (ptr + i) << endl;
    }

    return 0;
}