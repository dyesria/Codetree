#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B; int max; int min;
    cin >> A >> B;
    
    if (A > B) {
        max = A;
        min = B;
    } else {
        max = B;
        min = A;
    }

// ------------------
    for (int i=max; i>=min; i--) {
        if (i == min) {
            cout << i << endl;
            break;
        }
        
        cout << i << " ";
    }

    return 0;
}