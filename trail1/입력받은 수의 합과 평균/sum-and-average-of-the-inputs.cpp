#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << fixed;
    cout.precision(1);

    int sum = 0; int cnt = 0;
    for (int i=1; i<=N; i++) {
        int input;
        cin >> input;

        sum += input;
        cnt++;
    }
    cout << sum << " " << sum / (double)cnt;
    return 0;
}