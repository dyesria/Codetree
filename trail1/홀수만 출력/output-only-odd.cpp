#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B;

    cin >> A >> B;

    for (int i=A; i<=B; i += 2) {
        if (i == B) {
            cout << i << endl;
            break;
        }
        cout << i << " ";
    }
    return 0;
}