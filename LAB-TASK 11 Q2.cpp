#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0.0;

    while (true) {
        cout << "Enter the number of data (1-100): ";
        cin >> n;

        if (n >= 1 && n <= 100) {
            break;
        } else {
            cout << "Error! Please enter a number between 1 and 100.\n";
        }
    }

    float numbers[n];

    cout << "\nEnter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = sum / n;
    cout << "\nAverage of the numbers is: " << average << endl;

    return 0;
}