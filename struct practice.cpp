
#include <iostream>
#include<vector>
using namespace std;
struct student{
    string name;
    string rollno;
    int batch;
    bool isEnrolled;
    char section;
};
student inputStudent(){
    student s1;
    cout<<"enter student's name: ";
    cin>>s1.name;
    cout<<"enter student's roll number: ";
    cin>>s1.rollno;
    cout<<"enter student's batch: ";
    cin>>s1.batch;
    cout<<"is student enrolled: ";
    cin>>s1.isEnrolled;
    cout<<"enter student's section: ";
    cin>>s1.section;
    return s1;
}
void outputStudent(student s1){
    cout<<"Student's name: "<<s1.name<<endl;
    cout<<"Student's roll number: "<<s1.rollno<<endl;
    cout<<"Student's batch: "<<s1.batch<<endl;
    cout<<"Student's enrollment: "<<s1.isEnrolled<<endl;
    cout<<"Student's section:  "<<s1.section<<endl;
}
int main(){
    student s1=inputStudent();
    outputStudent(s1);
    return 0;
}
