#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 2;
    int b = 5;
    int tmp = b;
    b = a;
    a = tmp;

    cout << a << endl
         << b;
    return 0;
}