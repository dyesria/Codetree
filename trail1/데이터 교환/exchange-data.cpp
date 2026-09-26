#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5; int b = 6; int c = 7;
    int tmp = b;
    int tmp2 = c;
    
    b = a;
    c = tmp;
    a = tmp2;

    cout << a << endl
         << b << endl
         << c;

    return 0;
}