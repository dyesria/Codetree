#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char c; double a; double b;

    cin >> c >> a >> b;

    cout << c << endl;
    
    cout << fixed;
    cout.precision(2);
    cout << a << endl
         << b << endl;
    return 0;
}