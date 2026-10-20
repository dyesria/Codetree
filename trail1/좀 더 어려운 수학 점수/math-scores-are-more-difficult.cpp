#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Amath; int Bmath;
    int Aeng; int Beng;

    cin >> Amath >> Aeng
        >> Bmath >> Beng;

    char name;

    if (Amath == Bmath) {
        if (Aeng < Beng) {
            name = 'B';
        } else {
            name = 'A';
        }
    } else {
        Bmath < Amath ? name = 'A' : name = 'B';
    }

    cout << name << endl;
    
    return 0;
}