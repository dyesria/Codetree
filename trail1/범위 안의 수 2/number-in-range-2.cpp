#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum = 0;
    int cnt = 0;
    int input;

    for (int i=1; i<=10; i++) {
        cin >> input;

        if (0 <= input && input <= 200) {
            sum += input;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << sum / (double)cnt;
    
    return 0;
}