#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "Enter current temperature: ";
    cin >> temp;

    if (temp > 45) {
        cout << "ALERT! Temperature is above safe limit!" << endl;
    }
    else {
        cout << "Temperature is normal." << endl;
    }

    return 0;
}