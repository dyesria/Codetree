#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a; double b;
    cin >> a 
        >> b;

    if (1.0<=a && 1.0<=b) {
        cout << "High";
    } else if (0.5<=a && 0.5<=b) {
        cout << "Middle";
    } else {
        cout << "Low";
    }
    
    
    return 0;
}