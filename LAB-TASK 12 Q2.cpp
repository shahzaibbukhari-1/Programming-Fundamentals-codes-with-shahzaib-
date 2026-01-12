#include <iostream>
using namespace std;

// Function to calculate percentage
double calculatePercentage(int m1, int m2, int m3, int m4, int m5) {
    int total = m1 + m2 + m3 + m4 + m5;
    return (total / 500.0) * 100;
}

// Function to display result and grade
void displayResult(double percentage) {
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;
}

int main() {
    int m1, m2, m3, m4, m5;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    double percentage = calculatePercentage(m1, m2, m3, m4, m5);
    displayResult(percentage);

    return 0;
}