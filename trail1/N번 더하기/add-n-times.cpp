#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int N;
    cin >> A >> N;

    int sum = 0;
    sum += A;
    for (int i=1; i<=N; i++) {
        sum += N;
        cout << sum << endl;
    }
    return 0;
}