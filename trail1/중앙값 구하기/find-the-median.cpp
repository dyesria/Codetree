#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B; int C;
    int mid;
    cin >> A >> B >> C;

    mid = A;

    if ((A < B && B < C) || (C < B && B < A)) {
        mid = B;
    } else if ((B < A && A < C) || (C < A && A < B)) {
        mid = A;
    } else if ((A < C && C < B) || B < C && C < A){
        mid = C;
    }

    cout << mid;
    
    return 0;
}