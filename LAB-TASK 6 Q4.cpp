#include <iostream>
using namespace std;

int main() {
    int level, years;
    char remote;

    float basicSalary = 0;
    float expBonus = 0, remoteBonus = 0;
    float grossSalary, tax = 0, finalSalary;

    // Input
    cout << "Enter Job Level (1-4): ";
    cin >> level;

    cout << "Enter Years of Experience: ";
    cin >> years;

    cout << "Working in Remote Area? (y/n): ";
    cin >> remote;

    // Basic salary based on level
    if (level == 1) basicSalary = 120000;
    else if (level == 2) basicSalary = 85000;
    else if (level == 3) basicSalary = 60000;
    else if (level == 4) basicSalary = 40000;
    else {
        cout << "Invalid Job Level!";
        return 0;
    }

    // Experience bonus
    if (years >= 15)
        expBonus = basicSalary * 0.25;
    else if (years >= 10)
        expBonus = basicSalary * 0.15;
    else if (years >= 5)
        expBonus = basicSalary * 0.10;
    else
        expBonus = 0;

    // Remote area bonus
    if (remote == 'y' || remote == 'Y')
        remoteBonus = basicSalary * 0.08;

    // Gross salary
    grossSalary = basicSalary + expBonus + remoteBonus;

    // Tax deduction
    if (grossSalary >= 150000)
        tax = grossSalary * 0.30;
    else if (grossSalary >= 100000)
        tax = grossSalary * 0.20;
    else if (grossSalary >= 60000)
        tax = grossSalary * 0.10;
    else
        tax = 0;

    // Final salary
    finalSalary = grossSalary - tax;

    // Output
    cout << "\n--- Salary Details ---\n";
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Experience Bonus: " << expBonus << endl;
    cout << "Remote Area Bonus: " << remoteBonus << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Tax Deducted: " << tax << endl;
    cout << "Final Salary: " << finalSalary << endl;

    return 0;
}