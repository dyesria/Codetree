#include <iostream>

using namespace std;

int n, m;

void CommonMaxDivisor(int n, int m) {
    int common;
    int loop = 1;
    int max;

    if (m < n) {
        max = n;
    } else {
        max = m;
    }

    if (n == m) {
        common = max;
        cout << common;
        return;
    }

    while (loop != max) {
        if (m % loop == 0 && n % loop == 0) {
            common = loop;
        }

        loop++;
    }

    cout << common << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    CommonMaxDivisor(n, m);    

    return 0;
}