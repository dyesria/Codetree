#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for (int i=1; i<=N; i++) {

        if (i >= 30) {
            if (i % 3 == 0) {
                cout << "0";
            } else if (i % 30 < 10) {
                cout << "0";
            } else if (i % 10 == 0) {
                cout << i;
            } else if ( ((i%10) % 3) == 0 ) {
                cout << "0";
            } else {
                cout << i;
            }
        } else {
            if (i % 3 == 0) {
                cout << "0";
            } else if (i % 10 == 0) {
                cout << i;
            } else if ( ((i%10) % 3) == 0 ) {
                cout << "0";
            } else {
                cout << i;
            }
        }

        if (i < N) {
            cout << " ";
        }
    }


    return 0;
}
