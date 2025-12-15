#include <iostream>
using namespace std;

int main() {
    float salary;
    int years;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    float bonus = 0;

    if (years >= 1) {  // employee qualifies for evaluation
        if (years >= 10) {
            bonus = salary * 0.20; // highest increment
        }
        else if (years >= 5) {
            bonus = salary * 0.10;
        }
        else if (years >= 2) {
            bonus = salary * 0.05;
        }
        else {
            bonus = 0; // very short service
        }
    }
    else {
        bonus = 0; // no bonus
    }

    float newSalary = salary + bonus;

    cout << "Bonus Amount: " << bonus << endl;
    cout << "Updated Salary: " << newSalary << endl;

    return 0;
}