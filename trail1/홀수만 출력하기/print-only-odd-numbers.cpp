#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int input;

    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> input;

        if (input % 2 != 0 && input % 3 == 0) {
            cout << input << endl;
        }
    }
    return 0;
}