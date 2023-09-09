// calculates parking charges for three customers based on the number of hours they parked their cars

#include <iostream>
#include <iomanip>
using namespace std;

double customer1, customer2, customer3;

void userInput();
double calculateCharges(double);
void displayOutput();

int main() {
    userInput();
    displayOutput();
    return 0;
}

void userInput() {
    cout << "Car number: \t1" << endl;
    cout << "Hours parked: \t";
    cin >> customer1;
    cout << "\n----------------------\n" << endl;

    cout << "Car number: \t2" << endl;
    cout << "Hours parked: \t";
    cin >> customer2;
    cout << "\n----------------------\n" << endl;

    cout << "Car number: \t3" << endl;
    cout << "Hours parked: \t";
    cin >> customer3;
    cout << "\n----------------------\n" << endl;
}

double calculateCharges(double hours) {
    if (hours < 3) {
        return 12.00;
    } else {
        if (hours < 24) {
            return 12.00 + (hours - 3) * 0.90;
        } else {
            return 20.00;
        }
    }
}

void displayOutput() {
    float totalHours;
    float totalCharge;

    totalHours = customer1 + customer2 + customer3;
    totalCharge = calculateCharges(customer1) + calculateCharges(customer2) + calculateCharges(customer3);

    cout << "Car\tHours\tCharge\n";
    cout << "1\t" << fixed << setprecision(1) << customer1 << "\tR" << setprecision(2) << calculateCharges(customer1) << endl;
    cout << "2\t" << fixed << setprecision(1) << customer2 << "\tR" << setprecision(2) << calculateCharges(customer2) << endl;
    cout << "3\t" << fixed << setprecision(1) << customer3 << "\tR" << setprecision(2) << calculateCharges(customer3) << endl;

    cout << "\nTOTAL\t" << fixed << setprecision(1) << totalHours << "\tR" << setprecision(2) << totalCharge << endl;
}
