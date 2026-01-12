#include <iostream>
using namespace std;

int main() {
    int num;
    long long fact = 1;
    cout << "Enter a number: ";
    cin >> num;

    int i = 1;
    while (i <= num) {
        fact *= i;
        i++;
    }

    cout << "Factorial = " << fact;
    return 0;
}