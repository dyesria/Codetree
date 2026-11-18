#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int n;
    cin >> N;

    int sum = 0;
    for (int i=1; i<=N; i++) {
        cin >> n;

        if (n % 2 != 0 && n % 3 == 0) {
            sum += n;
        }
    }

    cout << sum;
    return 0;
}