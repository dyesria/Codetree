#include <iostream>
#include <sstream>

using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int lastZeroIndex;
    string line;

    getline(cin, line);

    stringstream ss(line);
    int num;
    
    int count = 0;

    while (ss >> num && count < 100) {
        arr[count] = num;

        if (num == 0) {
            lastZeroIndex = count;
            break;
        }

        count++;
    }

    // 4-1 = 3.    4-4 = 0. 3 2 1 
    int sum = 0;
    for (int i=lastZeroIndex-1; i>lastZeroIndex-4; i--) {
        sum += arr[i];
    }

    cout << sum;
    
    return 0;
}