#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N; int i;
    cin >> N;

    i = 1;

    while (i <= N) {
        if (i == N && i % 3 == 0) {
            cout << i << endl;
            break;
        }

        if (i % 3 == 0) {
            cout << i << " ";
        }
        i++;
    }
    return 0;
}