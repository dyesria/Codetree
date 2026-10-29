#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for (int i=N; i>=1; i--) {
        if (i == 1) {
            cout << i << endl;
            break;
        }
        cout << i << " ";
    }
    return 0;
}