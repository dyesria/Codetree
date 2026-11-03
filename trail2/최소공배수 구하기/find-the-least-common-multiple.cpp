#include <iostream>

using namespace std;

int n, m;

void MinCommonMulti(int n, int m) {
    int min; int minCommonMulti = 0;

    if (n < m) {
        min = n;
    } else {
        min = m;
    }

    int contiuneNum = min;
    do {
        if (contiuneNum % n == 0 && contiuneNum % m == 0) {
            minCommonMulti = contiuneNum;
            break;
        } else {
            contiuneNum++;
        }
    } while (minCommonMulti == 0);

    cout << minCommonMulti << endl;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    MinCommonMulti(n, m);

    return 0;
}