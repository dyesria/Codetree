#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sex; int age;
    cin >> sex
        >> age;

    if (sex == 0) {
        if (19 <= age) {
            cout << "MAN";
        } else {
            cout << "BOY";
        }
    }
    else if (sex == 1) {
        if (19 <= age) {
            cout << "WOMAN";
        } else {
            cout << "GIRL";
        }
    }
    return 0;
}