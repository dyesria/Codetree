#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B;
    cin >> B >> A;

    for (int i=B; i>=A; i-=2) {
        if (i == A) {
            cout << i << endl;    
            break;
        }
        cout << i << " ";
    }
    return 0;
}