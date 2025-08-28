#include <iostream>
using namespace std;
int count = 0;

class destructor {
public:
    destructor() {
        count++;
        cout << "Object " << count << " created." << endl;
    }
    ~destructor() {
        cout << "Object " << count << " destroyed." << endl;
        count--;
    }
};
int main() {
    destructor a,b,c,d;
    return 0;
}