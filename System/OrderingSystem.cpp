#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct MenuItem {
    string name;
    double price;
};

void displayMenu(const vector<MenuItem>& menu) {
    cout << "Menu:" << endl;
    for (size_t i = 0; i < menu.size(); ++i) {
        cout << i + 1 << ". " << menu[i].name << " - $" << menu[i].price << endl;
    }
}

void takeOrder(const vector<MenuItem>& menu, vector<MenuItem>& order) {
    int choice;
    cout << "Enter the item number to order (0 to finish): ";
    while (cin >> choice && choice != 0) {
        if (choice > 0 && choice <= menu.size()) {
            order.push_back(menu[choice - 1]);
            cout << "Added " << menu[choice - 1].name << " to your order." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << "Enter the item number to order (0 to finish): ";
    }
}

double calculateTotal(const vector<MenuItem>& order) {
    double total = 0.0;
    for (const auto& item : order) {
        total += item.price;
    }
    return total;
}

void displayOrder(const vector<MenuItem>& order) {
    cout << "Your order:" << endl;
    for (const auto& item : order) {
        cout << item.name << " - $" << item.price << endl;
    }
    cout << "Total: $" << calculateTotal(order) << endl;
}

int main() {
    vector<MenuItem> menu = {
        {"Burger", 5.99},
        {"Fries", 2.49},
        {"Soda", 1.99},
        {"Salad", 3.99}
    };

    vector<MenuItem> order;
    
    displayMenu(menu);
    takeOrder(menu, order);
    displayOrder(order);

    return 0;
}
