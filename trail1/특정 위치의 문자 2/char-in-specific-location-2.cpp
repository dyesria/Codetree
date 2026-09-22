#include <iostream>
#include <sstream>
using namespace std;

int main() {
    // Please write your code here.
    string line;

    getline(cin, line);
    stringstream ss(line);

    char charList[3];

    int charCount = 1;
    char thisChar;

    while (ss >> thisChar) {

        if (charCount == 2) {
            charList[0] = thisChar;
        }

        if (charCount == 5) {
            charList[1] = thisChar;
        }

        if (charCount == 8) {
            charList[2] = thisChar;
        }

        charCount++;
    }
    
    for (int i=0; i<=2; i++) {
        if (i == 2) {
            cout << charList[i] << endl;
            break;
        }

        cout << charList[i] << " ";
    }

    return 0;
}