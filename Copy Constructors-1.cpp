//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    copyDate(Date &d) { 
        day = d.day;
        month = d.month;
        year = d.year;
    }
    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};  

int main() {
    Date d1(28,8,2025);
    Date d2(d1); 
    cout << "Original Date: ";
    d1.displayDate();
    cout << "Copied Date: ";
    d2.displayDate();

    return 0;
}

/* OUTPUT:
Original Date: 28/8/2025
Copied Date: 28/8/2025

*/
