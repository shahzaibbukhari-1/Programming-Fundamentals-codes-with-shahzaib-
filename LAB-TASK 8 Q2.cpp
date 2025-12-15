#include <iostream>
using namespace std;

int main() {
    int choice;
    double usd, converted;

    cout << "Currency Converter\n1. USD to PKR\n2. USD to Pound\n3. USD to Euro\n";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice) {
    case 1:
        converted = usd * 280;
        cout << "PKR: " << converted;
        break;

    case 2:
        converted = usd * 0.79;
        cout << "Pound: " << converted;
        break;

    case 3:
        converted = usd * 0.92;
        cout << "Euro: " << converted;
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}