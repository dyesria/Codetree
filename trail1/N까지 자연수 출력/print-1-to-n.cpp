#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int i=1;
    while(i < N+1) {
        if (i == N) {
            cout << i << endl;    
            break;
        }
        cout << i << " ";
        i++;
    }
    return 0;
}