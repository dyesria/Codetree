#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N; int a;

    cin >> N >> a;

    int n = 1;
    while (n != N+1) {
        if (n % a == 0) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }

        n++;
    }
    return 0;
}