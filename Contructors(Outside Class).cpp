//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;    

class student {
    int id;
    char name[20];
    float marks;
public:
    student();
    void display();
};

student::student() {
    cout<<"Enter student id: ";
    cin>>id;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter student marks: ";
    cin>>marks;
}
void student::display() {
    cout<<"\nStudent id: "<<id;
    cout<<"\nStudent name: "<<name;
    cout<<"\nStudent marks: "<<marks;
}

int main() {
    student s;
    s.display();
    return 0;
}
/* OUTPUT:
Enter student id: 001
Enter student name: Abhinav
Enter student marks: 97

Student id: 1
Student name: Abhinav
Student marks: 97
*/