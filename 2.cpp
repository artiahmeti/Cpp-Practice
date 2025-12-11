#include <iostream>
using namespace std;



int processData(int count) {
    return count * 2;
}

double processData(double temp) {
    return (temp * 9.0/5.0) + 32.0;
}

double processData(double humidity, double airQuality) {
    return (humidity + airQuality) / 2.0;
}

int main () {
    int itemCount = 5;
    double temperature = 20.0;
    double humidity = 40.0, airQuality = 80.0;

    cout << "item count x 2 = " << processData(itemCount) << endl;
    cout << "Temp in fahrenheit = " << processData(temperature) << endl;
    cout << "Humidity & airquality = " << processData(humidity, airQuality) << endl;

    return 0;




}