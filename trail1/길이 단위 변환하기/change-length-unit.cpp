#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double ft = 9.2 * 30.48;
    double mi = 1.3 * 160934;

    cout << fixed;

    cout.precision(1);
    
    cout << "9.2ft = " << ft << "cm" << endl
         << "1.3mi = " << mi << "cm" << endl;

    return 0;
}