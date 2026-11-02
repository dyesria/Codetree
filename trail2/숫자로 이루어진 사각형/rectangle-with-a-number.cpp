#include <iostream>

using namespace std;

int N;
int n;

void CheckExceed9(int &n) {
    if (n == 10) {
        n = 1;
    }
}

void Square(int N) {
    n = 1;

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (j == N) {
                cout << n++;
                CheckExceed9(n);
                break;
            }

            cout << n++ << " ";
            CheckExceed9(n);
        }
        cout << endl;
    }
}

int main() {
    cin >> N;
    // Please write your code here.
    Square(N);

    return 0;
}