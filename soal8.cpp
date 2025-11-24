#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string biner;

    while (n > 0) {
        biner = to_string(n % 2) + biner;
        n /= 2;
    }

    cout << biner << endl;

    return 0;
}