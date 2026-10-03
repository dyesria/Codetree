#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h; int w;

    cin >> h >> w;

    double b;

    b = (10000 * w) / (h*h);

    cout << (int) b << endl;

    if (b >= 25) {
        cout << "Obesity";
    }

    
    
    return 0;
}