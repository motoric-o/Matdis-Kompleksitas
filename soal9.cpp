#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string biner;
    cin >> biner;
    int n;

    for (int i = biner.length()-1; i > -1; i--) {
        int digit = (int)biner[i] - (int)'0';
        n += (digit * pow(2, biner.length()-1-i));
    }

    cout << n << endl;

    return 0;
}