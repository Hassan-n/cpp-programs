#include <iostream>
#include "Info.h"

using namespace std;

int main(){
    int x, NumEmployee;
    x = 0;
    salary s[10];

    cout << "Enter the number of employees : ";
    cin >> NumEmployee;

    while (x < NumEmployee){
        s[x].getInfo();
        s[x].getSalary();
        s[x].calculateNet();
        x++;
    }

    cout << endl << "Employee Number \t Name \t Class \t Basic \t Hours \t Weeks \t Tax \t Net Pay" << endl;

    for(x = 0; x < NumEmployee; x++){
        s[x].display();
    }

    return 0;
}


