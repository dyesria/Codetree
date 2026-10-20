#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a; int b; int c;
    int low;

    cin >> a >> b >> c;

    low = a;
    if (b<low) {
        low = b;
    } 
    if (c<low) {
        low = c;
    }

// --------------- 출력부----------------
    if (a == low) {
        cout << "1";
    } else {
        cout << "0";
    }

    cout << " ";

    if (a == b && b == c) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}