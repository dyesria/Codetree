#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mScore; int fScore;
    cin >> mScore >> fScore;

    if (mScore < 90) {
        cout << "0";
    } else if (95 <= fScore) {
        cout << "100000";
    } else if (90 <= fScore) {
        cout << "50000";
    } else {
        cout << "0";
    }

    return 0;
}