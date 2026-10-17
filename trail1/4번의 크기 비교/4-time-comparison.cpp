#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B; int C; int D; int E;

    cin >> A;
    cin >> B >> C >> D >> E;

    cout << (A>B ? 1 : 0) << endl
         << (A>C ? 1 : 0) << endl
         << (A>D ? 1 : 0) << endl
         << (A>E ? 1 : 0) << endl;

    return 0;
}