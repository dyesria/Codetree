#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a; int b; int c;
    int lowest;

    cin >> a >> b >> c;
    lowest = a;
    if (b<lowest) {
        lowest = b;
    }
    if (c<lowest) {
        lowest = c;
    }

    cout << lowest << endl;

    return 0;
}