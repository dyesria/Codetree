#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int sum = 0;
    cin >> N;

    for (int i=N; i<=100; i++) {
        sum += i;
    }

    cout << sum;
    return 0;
}