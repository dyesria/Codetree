#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a; int b; int c;
    int max;
    cin >> a >> b >> c;

    max = a;

    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }

    cout << max;
    return 0;
}