#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    while (1 <= n) {
        if (n == 1) {
            cout << n << endl;
            break;
        }
        cout << n << " ";
        n--;
    }
    return 0;
}