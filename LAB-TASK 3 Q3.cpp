#include <iostream>
using namespace std;

int main() {
    float balance;
    int loyal;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Are you a loyal customer? (1 = yes, 0 = no): ";
    cin >> loyal;

    // Account Type using ternary + nested ternary
    string accountType = 
        (balance < 100) ? "Low Balance Account" :
        (balance <= 500) ? "Standard Account" :
        "Premium Account";

    // Special Offer eligibility
    string offer =
        ( (balance > 200) && (loyal == 1) ) ?
        "Eligible for Special Offer" :
        "Not Eligible for Special Offer";

    cout << "\nAccount Type: " << accountType << endl;
    cout << "Special Offer: " << offer << endl;

    return 0;
}