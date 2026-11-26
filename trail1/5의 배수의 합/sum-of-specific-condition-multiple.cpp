#include <iostream>
using namespace std;

void simpleSwap(int &a, int &b) {
    int tmp;

    if (b < a) {
        tmp = b;
        b = a;
        a = tmp;
    }
}

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    
    simpleSwap(A, B);

    int sum = 0;
    for (int i=A; i<=B; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;

    return 0;
}