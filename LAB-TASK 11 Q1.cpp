#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "\nSum of the 5 numbers is: " << sum << endl;
    return 0;
}