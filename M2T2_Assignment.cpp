//CSC 134
// M2T2
// Alexander
// 9/27/2026
// Checkout Machine

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    // SIMPLE RECIPT
    // + SALES TAX

    // VARIABLES
    string item = "Apple";
    double item_price = 3.99
    double tax_percent = 0.08
    double tax_amount; 
    double total; //price + tax
    // GREET USER AND TAKE ORDER
    cout << "Welcome to our CSC 134 Resturant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // CACLULATE MEAL PRICE
    // SALES TAX + TOTAL PRICE

    tax_amount = item_price * tax_percent; 
    total = item_price + tax_amount;

    // PRINT RECPIT
    cout << setprecision << fixed;
    cout << total << endl;
    
    return 0; // no errors
}