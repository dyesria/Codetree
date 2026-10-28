#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for (int i=5; i<=17; i += 2) {
        if(i == 17) {
            cout << i << endl;
            break;
        }
    
        cout << i << " ";
    }
    return 0;
}