//C++ application that allows users to input a numerator and denominator and then simplifies the fraction to its simplest form by dividing both the numerator and denominator by their greatest common divisor (GCD).

#include <iostream>
using namespace std;

int numerator, denominator;

int gcd(int num, int den) {
    if (den == 0) {
        return num;
    } else {
        return gcd(den, num % den);
    }
}

int reduce(int num, int denom) {
    if (num <= 0 || denom <= 0) {
        return 0;
    } else {
        numerator = num / gcd(num, denom);
        denominator = denom / gcd(num, denom);
        return 1;
    }
}

int main() {
    cout << "Please enter Numerator: ";
    cin >> numerator;
    cout << "Please enter Denominator: ";
    cin >> denominator;

    if (reduce(numerator, denominator) == 1) {
        cout << numerator << '/' << denominator << endl;
    } else {
        cout << "Fraction error" << endl;
    }

    return 0;
}
