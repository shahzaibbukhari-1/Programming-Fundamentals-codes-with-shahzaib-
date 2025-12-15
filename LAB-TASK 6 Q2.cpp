#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    float bill = 0;

    if (units <= 100) {  
        bill = units * 5;
    }
    else {  
        bill = units * 10;
        float tax = bill * 0.29;
        bill += tax;
    }

    bill += 39;  // maintenance fee

    cout << "Total Electricity Bill = $" << bill << endl;

    return 0;
}