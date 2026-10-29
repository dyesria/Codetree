#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int i = 10;

    while (i < 27) {
        if (i == 26) {
            cout << i << endl;
            break;
        }
        cout << i << " ";
        i++;
    }
    return 0;
}