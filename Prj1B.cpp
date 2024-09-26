// Prj1B.cpp - Program to calculate change from a dollar
#include <iostream>
#include "Prj1A.cpp" // need to inclued for the different var

using namespace std;

int main() {
    int purchase;  // Amount in pennies
    int change;    // Change in pennies
    int QUARTER = 25;
    int DIME = 10;
    int NICKEL = 5;
    int PENNY = 1;
    int quarters;
    int dimes;
    int nickels;
    int pennies;




    // Prompt user for purchase amount
    cout << "Enter a purchase amount in pennies (<= 100): ";
    cin >> purchase;

    // Calculate the change from a dollar
    change = 100 - purchase;

    // Calculate number of quarters, dimes, nickels, and pennies
     quarters = change / QUARTER;
    change %= QUARTER;
    dimes = change / DIME;
    change %= DIME;
     nickels = change / NICKEL;
    change %= NICKEL;
     pennies = change;

    // Display the change
    cout << "Change from a dollar: " << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
