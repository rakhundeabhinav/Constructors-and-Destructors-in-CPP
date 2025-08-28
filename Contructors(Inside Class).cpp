//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

class student {
    int id;
    char name[20];
    float marks;

public :student() {
    cout<<"Enter student id: ";
    cin>>id;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter student marks: ";
    cin>>marks;
}
void display() {
    cout<<"Student id: "<<id<<endl;
    cout<<"Student name: "<<name<<endl;
    cout<<"Student marks: "<<marks<<endl;
}
};

int main() {
    student s1;
    s1.display();

    return 0;
}

/* OUTPUT:
Enter student id: 001
Enter student name: Abhinav
Enter student marks: 98
Student id: 1
Student name: Abhinav
Student marks: 98
*/