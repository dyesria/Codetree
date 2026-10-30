#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char C; int N;
    cin >> C >> N;

    if (C == 'A') {
        for (int i=1; i<=N; i++) {
            if (i == N) {
                cout << i;
                break;
            }
            cout << i << " ";
        }
    } else if (C == 'D') {
        for (int i=N; i>=1; i--) {
            if (i == 1) {
                cout << i;
                break;
            }
            cout << i << " ";
        }
    }
    return 0;
}