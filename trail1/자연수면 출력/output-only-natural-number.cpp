#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B;
    cin >> A >> B;

    if (0 < A) {
        for (int i=1; i<=B; i++) {
            cout << A;
        }
    } else {
        cout << 0;
    }
    return 0;
}