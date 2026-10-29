#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A; int B; int i;
    cin >> A >> B;

    i = A;
    while (i <= B) {
        if (i == B && i % 2 == 0) {
            cout << i << endl;
            break;
        }

        if (i % 2 == 0) {
            cout << i << " ";
        }
        
        i++;
    }

    return 0;
} 