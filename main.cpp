// Program To Calculate An Estimate For a Carpet Cleaning Service
// Written in C++ by Pavon Dunbar

#include <iostream>

using namespace std;

int main() {
    cout << "To get an estimate, please enter your first name: "; 
    string name;
    cin >> name;
    cout << endl;
    cout << "Hello, " << name <<  ", welcome to PAVON'S CARPET CLEANERS!" << endl << endl;
    cout << "How many SMALL rooms would you like cleaned? ";
    int number_small_rooms {0};
    cin >> number_small_rooms;
    cout << endl;
    cout << "How many LARGE rooms would you like cleaned? ";
    int number_large_rooms {0};
    cin >> number_large_rooms;
    const double price_per_small_room {45.0}; // Price In US Dollars
    const double price_per_large_room {70.0}; // Price In US Dollars
    const double sales_tax {0.09}; // Sales Tax Expressed As A Decimal
    const int estimate_expiration {30}; // Number In Days
    cout << "\nHere's your estimate for carpet cleaning service, " << name << ":" << endl;
    cout << endl;
    cout << "Number of SMALL rooms: " << number_small_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl << endl;
    cout << "Number of LARGE rooms: " << number_large_rooms << endl;
    cout << "Price per large room: $" << price_per_large_room << endl << endl;
    cout << "========================================" << endl;
    cout << "SMALL Room Subtotal: $" << price_per_small_room * number_small_rooms << endl;
    cout << "LARGE Room Subtotal: $" << price_per_large_room * number_large_rooms << endl;
    cout << "Tax: $" << ((price_per_small_room * number_small_rooms) + (price_per_large_room * number_large_rooms)) * sales_tax << endl;
    cout << "TOTAL ESTIMATE: $" << ((price_per_small_room * number_small_rooms) + (price_per_large_room * number_large_rooms)) +  
    ((price_per_small_room * number_small_rooms) + 
    (price_per_large_room * number_large_rooms)) * sales_tax 
    << endl;
    cout << "========================================" << endl << endl;
    cout << "This Estimate Is Valid For " << estimate_expiration << " days" << endl;
    cout <<  endl;
    cout << "Thank you, " << name << ", for your consideration of PAVON'S CARPET CLEANERS!" << endl << endl;
    return 0;
}
