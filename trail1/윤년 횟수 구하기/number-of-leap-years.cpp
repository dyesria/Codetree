#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int leapYearCnt = 0;

    cin >> N;

    for (int i=1; i<=N; i++) {
        if (i % 100 == 0 && i % 400 != 0) {
            continue;
        } else if (i % 4 == 0) {
            leapYearCnt++;
        } else {
            continue;
        }
    }

    cout << leapYearCnt;
    return 0;
}