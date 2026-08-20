#include <iostream>
using namespace std;

void MinMaxAvg(int num1, int num2, int* min, int* max, double* avg) {
    if (num1 < num2) {
        *min = num1;
        *max = num2;
    } else {
        *min = num2;
        *max = num1;
    }
    *avg = (num1 + num2) / 2.0;
}

int main() {
    int a, b;
    int min_val, max_val;
    double avg_val;

    cout << "Enter two integers: ";
    cin >> a >> b;

    MinMaxAvg(a, b, &min_val, &max_val, &avg_val);

    cout << "Minimum value: " << min_val << endl;
    cout << "Maximum value: " << max_val << endl;
    cout << "Average value: " << avg_val << endl;

    return 0;
}