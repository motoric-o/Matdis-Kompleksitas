#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int c = 1;

    for (int i=0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << "Fibonacci suku ke-" << n << ": " << c << endl;

    return 0;
}