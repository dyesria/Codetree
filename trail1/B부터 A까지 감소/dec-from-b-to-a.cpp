#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B;
    cin >> A >> B;

    for (int i=B; i>=A; i--) {
        if (i == A) {
            cout << i << endl;
            break;
        }
        cout << i << " ";
    }
    return 0;
}