#include <iostream>

using namespace std;

int main()
{
    const double roseEach = 3.75;
    const double chocolateLb = 14.2;
    int deliveryCharge = 5;
    int roseOrder;
    double chocolateOrder;
    string userMessage;

    cout << "Welcome to BeMine!" << endl;
    cout << "How many roses would you like to purchase at $" << roseEach << " a stem?" << endl;
    cin >> roseOrder;
    cout << "How much chocolate would you like to purchase at $" << chocolateLb << " a pound?" << endl;
    cin >> chocolateOrder;
    cout << "Enter your personal message" << endl;
    cin.ignore();
    getline(cin, userMessage);  //getline(cin, userMessage); // Gets entire line up to ENTER
    cout << endl;
    cout << endl;

    double roseTotal = roseEach * roseOrder;
    double chocolateTotal = chocolateOrder * chocolateLb;
    double totalBill = roseTotal + chocolateTotal + deliveryCharge;

    cout << "ORDER DETAILS:" << endl;
    cout << roseOrder << " at $" << roseEach << " = " << roseTotal << endl;
    cout << chocolateOrder << " at $" << chocolateLb << " = " << chocolateTotal << endl;
    cout << "With a special note:" << endl;
    cout << "\t" << userMessage << endl;
    cout << "Thank you for shopping at BeMine!" << endl;
    cout << "Your total bill is $" << totalBill << endl;

    return 0;
}
