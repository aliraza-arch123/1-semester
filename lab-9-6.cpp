#include<iostream>
using namespace std;
int main (){
 map<string, map<string, double>> menu = {
{"Breakfast", {{"Anda Paratha", 40}, {"Nan Chany", 60}, {"Siri Paye", 150}, {"Tea", 15}}},
        {"Lunch", {{"Chicken Karahi", 1050}, {"Mutton Karahi", 1800}, {"Egg Fried Rice", 450}, {"BBQ", 1050}}},
        {"Dinner", {{"Chicken Karahi", 1050}, {"Mutton Karahi", 1800}, {"Egg Fried Rice", 450}, {"BBQ", 1050}, {"Saji", 800}}}
    };
    string choice, item;
    double total = 0;
    char orderMore;
    do {
        cout << "Select meal type (Breakfast, Lunch, Dinner): ";
        cin >> choice;

        cout << "Available items:\n";
        for (auto &sub : menu[choice]) {
            cout << sub.first << " (Rs." << sub.second << ")\n";
        }

        cout << "Enter item name: ";
        cin.ignore();
        getline(cin, item);

        double price = menu[choice][item];
        int quantity;
        cout << "Enter quantity (e.g., kg or dozen): ";
        cin >> quantity;

        total += price * quantity;

        cout << "Add more items? (y/n): ";
        cin >> orderMore;
    } while (orderMore == 'y');

    cout << "Total bill: Rs." << total << endl;
    return 0;
}

