#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int classroom2 = 0, hallway3 = 0, restroom12 = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            if (i % 12 == 0) {
                restroom12++;
            } else if (i % 3 == 0) {
                hallway3++;
            } else {
                classroom2++;
            }
        } else if (i % 3 == 0) {
            if (i % 12 == 0) {
                restroom12++;
            } else {
                hallway3++;
            }
        }
    }

    cout << classroom2 << " " << hallway3 << " " << restroom12;

    return 0;
}
