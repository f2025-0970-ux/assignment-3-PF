#include<iostream>
using namespace std;
int main () {
    double income,netsalary;
    double tax = 0.0;
    cout<<" please Enter monthly income   ";
    cin>>income;

    if (income < 50000) {
        tax = 0;
    }
    else if (income <= 10000) {
        tax = income * 0.10;
    }
    else if (income <= 200000) {
        tax = income * 0.20;
    }
    else {
        tax = income * 0.30;
    }

    netsalary = income - tax;

    cout<<"tax amount  =  "<<tax<<endl;
    cout<<"the salary after tax deduction: "<<netsalary<<endl;

    return 0;
}