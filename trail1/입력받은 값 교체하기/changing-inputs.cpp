#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a; int b; int tmp;

    cin >> a >> b;

    tmp = a;
    a = b;
    b = tmp;

    cout << a << " " << b;
    return 0;
}