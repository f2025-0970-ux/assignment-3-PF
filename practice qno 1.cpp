
#include <iostream>
using namespace std;
int main() {
    int marks, attendance, income;
    cout<<"enter marks: ";
    cin>>marks;
    cout<<"enter attendance: ";
    cin>>attendance;
    cout<<"enter family income: ";
    cin>>income;
    if (income <=50000){
        if(marks>=85 && attendance >= 80){
            cout<<"  full scholarship  "<<endl;
        }
        else if (marks>=70 || marks<85){
            cout<<"   Partial scholarship   "<<endl;
        }
        else {
            cout<<"   no scholarship   ";
        }
    }
    else{
        cout<<"   not eligible   ";
    }
    return 0;
}
