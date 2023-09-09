#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED
#include <iostream>

using namespace std;

class emp{
    public:
        int EmpNum;
        char Name[20], Class[20];

        void getInfo(){
            cout << endl <<"Employee Details" << endl;
            cout << "Enter Employee Number : ";
            cin >> EmpNum;
            cout << "Enter Employee Name : ";
            cin >> Name;
            cout << "Enter Employee Classification : ";
            cin >> Class;
        }
};

class salary : public emp{
    double Rate, Hours, Weeks, Gross, Tax, Net;
    public:
        void getSalary(){
            cout << endl << "Employee Salary" <<endl;
            cout << "Enter rate per hour: ";
            cin >> Rate;
            cout << "Enter hours worked in a week: ";
            cin >> Hours;
            cout << "Enter weeks worked in the month: ";
            cin >> Weeks;
            cout << "\n=================================\n";
        }


        double calculateNet(){
            if(Hours >= 41){
                Gross = Rate * Hours * Weeks * 1.5;
                Tax = 0.50;
                Net = Gross - (Gross * Tax);
            }else{
                Gross = Rate * Hours * Weeks;
                Tax = 0.40;
                Net = Gross - (Gross * Tax);
            }

            return Net;
        }

void display(){
    cout << endl << EmpNum << "\t\t\t " << Name << "\t " << Class << "\t R" << Gross << "\t " <<Hours << "\t " <<Weeks << "\t " << Tax << "%\t " << "R" << Net << endl;
}
};

#endif // INFO_H_INCLUDED
