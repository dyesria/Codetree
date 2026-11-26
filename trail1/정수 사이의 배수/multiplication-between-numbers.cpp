#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    int cnt = 0, sum = 0;

    for (int i=A; i<=B; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            cnt ++;
        }
    }

    cout << fixed;
    cout.precision(1);

    double avg = sum / (double)cnt;

    cout << sum << " " << avg;
    return 0;
}