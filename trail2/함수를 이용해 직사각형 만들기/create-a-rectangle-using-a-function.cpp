#include <iostream>

using namespace std;

int n, m;

void printSquare(int n, int m) {
    for (int i=1; i<=n; i++) {
        for (int i=1; i<=m; i++) {
            cout << "1";
        }
        cout << endl;
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    printSquare(n, m);

    return 0;
}