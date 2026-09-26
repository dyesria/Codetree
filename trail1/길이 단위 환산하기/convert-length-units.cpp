#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    const double fit = 30.48;
    double N;
    cin >> N;

    cout << fixed;
    cout.precision(1);

    cout << N * fit;
    return 0;
}