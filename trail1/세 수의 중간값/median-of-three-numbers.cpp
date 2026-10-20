#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B; int C;
    cin >> A >> B >> C;
    
    if (A<B && B<C) {
        cout << "1";
    } else {
        cout << "0";
    }

    return 0;
}