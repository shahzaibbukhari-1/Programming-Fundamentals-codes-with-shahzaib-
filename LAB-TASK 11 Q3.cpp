#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    int numbers[n];

    cout << "\nEnter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int largest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "\nLargest number is: " << largest << endl;

    return 0;
}