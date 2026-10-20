#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int M;
    cin >> M;

    if (3 <= M && M <= 5) {
        cout << "Spring";
    } else if (6 <= M && M <= 8) {
        cout << "Summer";
    } else if (9 <= M && M <= 11) {
        cout << "Fall";
    } else if (12 == M || 1 == M || 2 == M) {
        cout << "Winter";
    } else {
        cout << "범위를 벗어났습니다.";
    }
    
    return 0;
}