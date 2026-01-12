#include <iostream>
using namespace std;

// Function to calculate bonus (pass by value)
double calculateBonus(double salary, int rating) {
    double bonus = 0;

    if (rating == 5)
        bonus = salary * 0.20;
    else if (rating == 4)
        bonus = salary * 0.10;
    else if (rating == 3)
        bonus = salary * 0.05;
    else
        bonus = 0;

    return bonus;
}

// Function to display bonus and final salary
void displayBonus(double salary, double bonus) {
    cout << "Bonus Amount: " << bonus << endl;
    cout << "Final Salary: " << salary + bonus << endl;
}

int main() {
    double salary;
    int rating;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Performance Rating (1-5): ";
    cin >> rating;

    double bonus = calculateBonus(salary, rating);
    displayBonus(salary, bonus);

    return 0;
}