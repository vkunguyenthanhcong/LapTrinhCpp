#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    Inventory(int itemNumber, int quantity, double cost) {
        this->itemNumber = itemNumber;
        this->quantity = quantity;
        this->cost = cost;
        setTotalCost();
    }

    void setItemNumber(int itemNumber) {
        if (itemNumber >= 0) {
            this->itemNumber = itemNumber;
        }
    }

    void setQuantity(int quantity) {
        if (quantity >= 0) {
            this->quantity = quantity;
            setTotalCost();
        }
    }

    void setCost(double cost) {
        if (cost >= 0) {
            this->cost = cost;
            setTotalCost();
        }
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() {
        return itemNumber;
    }

    int getQuantity() {
        return quantity;
    }

    double getCost() {
        return cost;
    }

    double getTotalCost() {
        return totalCost;
    }
};

int main() {
    Inventory item1;
    Inventory item2(1234, 10, 5.99);

    item1.setItemNumber(5678);
    item1.setQuantity(20);
    item1.setCost(3.99);

    cout << "Item 1 Info:" << endl;
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: $" << item1.getCost() << endl;
    cout << "Total Cost: $" << item1.getTotalCost() << endl;

    cout << "Item 2 Info:" << endl;
    cout << "Item Number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: $" << item2.getCost() << endl;
    cout << "Total Cost: $" << item2.getTotalCost() << endl;

    return 0;
}
