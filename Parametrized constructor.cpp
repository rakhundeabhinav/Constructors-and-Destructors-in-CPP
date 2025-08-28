//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;    

class contructor {
    int day, month, year;
    public:
    contructor(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    void displayDate() {
        cout << day << "/" << month << "/" << year;
    }
};
int main() {
    contructor date(28,8,2025);
    date.displayDate();
    return 0;
}
/* OUTPUT:
28/8/2025
*/