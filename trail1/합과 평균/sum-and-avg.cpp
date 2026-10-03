#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    int A; int B;
    cin >> A >> B;

    cout << A+B << ' ' << (double)(A+B) / 2;
    return 0;
}