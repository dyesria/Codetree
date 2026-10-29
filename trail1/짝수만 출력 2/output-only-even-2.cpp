#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B;
    cin >> B >> A;

    int i = B;
    while (A <= i) {
        if (i == A && i % 2 == 0) {
            cout << i << endl;
            break;
        }

        if (i % 2 == 0) {
            cout << i << " ";
        }
        i -= 2;
    }
    return 0;
}