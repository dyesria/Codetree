#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int evenCnt = 0;

    for (int i=1; i<=5; i++) {
        cin >> n;

        if (n % 2 == 0) {
            evenCnt++;
        }
    }

    cout << evenCnt;
    return 0;
}