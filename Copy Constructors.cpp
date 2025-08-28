//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

class Student {
    int age;
    string name;
public:
    Student(int a, string n) {
        age=a;
        name=n;
    }
    copyStudent(Student &s) {
        age = s.age;
        name = s.name;
    }
    void display() {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1(20, "Abhinav");
    Student s2 = s1;

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nCopy of Student 1:" << endl;
    s2.display();

    return 0;
}
/* OUTPUT:
Student 1:
Age: 20
Name: Abhinav

Copy of Student 1:
Age: 20
Name: Abhinav
*/
    