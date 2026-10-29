#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i = 26;
    while (10 <= i) {
        if (i == 10) {
            cout << i << endl;
            break;
        }

        cout << i << " ";
        i--;
    }
    return 0;
}