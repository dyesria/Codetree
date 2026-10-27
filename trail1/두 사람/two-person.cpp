#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int age1; char sex1;
    int age2; char sex2;

    cin >> age1 >> sex1;
    cin >> age2 >> sex2;

    if ((19 <= age1 && sex1 == 'M') ||
        (19 <= age2 && sex2 == 'M')) {
            cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    
    return 0;
}