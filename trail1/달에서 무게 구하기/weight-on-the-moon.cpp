#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Please write your code here.
    double sum = 13 * 0.165000;

    cout << fixed;
    cout.precision(6);
    cout << "13 * 0.165000 = " << sum;

    return 0;
}