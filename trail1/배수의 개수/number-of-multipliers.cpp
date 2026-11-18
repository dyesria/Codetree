#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int multipleOf3 = 0;
    int multipleOf5 = 0;
    
    for (int i=1; i<=10; i++) {
        cin >> N;

        if (N % 3 == 0) {
            multipleOf3++;
        } 
        if (N % 5 == 0) {
            multipleOf5++;
        }
    }

    cout << multipleOf3 << " " << multipleOf5;
    return 0;
}