#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    
    int sum = A;
    while (sum <= B) {
        cout << sum << " ";
        if (sum % 2 == 0) {
            sum += 3;
        } else if (sum % 2 != 0) {
            sum *= 2;
        }
    }
    return 0;
}