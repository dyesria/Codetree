#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int oddSum = 0;
    int evenSum = 0;
    int N;

    for (int i=1; i<=10; i++) {
        cin >> N;
        if (i % 2 == 0) {
            evenSum += N;
        } else {
            oddSum += N;
        }
    }

    if (evenSum >= oddSum) {
        cout << evenSum - oddSum;
    } else {
        cout << oddSum - evenSum;
    }
     
    return 0;
}