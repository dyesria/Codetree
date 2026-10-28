#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char cough1; char cough2; char cough3;
    int temp1; int temp2; int temp3;
    
    cin >> cough1 >> temp1
        >> cough2 >> temp2
        >> cough3 >> temp3;

    int emergencyCount = 0;

    if (cough1 == 'Y') {
        if (37 <= temp1) {
            emergencyCount++;
        }
    }
    if (cough2 == 'Y') {
        if (37 <= temp2) {
            emergencyCount++;
        }
    }
    if (cough3 == 'Y') {
        if (37 <= temp3) {
            emergencyCount++;
        }
    }

// ------------------------------
    if (2 <= emergencyCount) {
        cout << "E";
    }
    else {
        cout << "N";
    }
    return 0;
}