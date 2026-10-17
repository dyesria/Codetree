#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int AMath; int AEng;
    int BMath; int BEng;

    cin >> AMath >> AEng;
    cin >> BMath >> BEng;

    cout << (AMath > BMath && AEng > BEng ? 1 : 0) << endl;
    return 0;
}