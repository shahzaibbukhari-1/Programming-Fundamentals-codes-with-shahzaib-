#include <iostream>
using namespace std;

int main() {
    int category, item, qty;
    double price = 0, total, discount = 0, finalAmount;

    cout << "Select Category:\n1. Electronics\n2. Clothing\n3. Groceries\n";
    cin >> category;

    switch (category) {
    case 1:
        cout << "Electronics:\n1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
        cin >> item;
        if (item == 1) price = 1000;
        else if (item == 2) price = 700;
        else if (item == 3) price = 150;
        else { cout << "Invalid item."; return 0; }
        break;

    case 2:
        cout << "Clothing:\n1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
        cin >> item;
        if (item == 1) price = 120;
        else if (item == 2) price = 40;
        else if (item == 3) price = 60;
        else { cout << "Invalid item."; return 0; }
        break;

    case 3:
        cout << "Groceries:\n1. Milk ($2)\n2. Bread ($3)\n3. Eggs ($5)\n";
        cin >> item;
        if (item == 1) price = 2;
        else if (item == 2) price = 3;
        else if (item == 3) price = 5;
        else { cout << "Invalid item."; return 0; }
        break;

    default:
        cout << "Invalid category!";
        return 0;
    }

    cout << "Enter Quantity: ";
    cin >> qty;

    total = price * qty;

    // Discount policy
    if (total < 100) discount = 0;
    else if (total <= 500) discount = total * 0.10;
    else discount = total * 0.20;

    finalAmount = total - discount;

    cout << "\n---- Invoice ----\n";
    cout << "Price per item: $" << price << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Total price: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount: $" << finalAmount << endl;

    return 0;
}