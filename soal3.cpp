#include <iostream>
using namespace std;

double factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    double total = factorial(n);

    cout << "Faktorial: " << total << endl;

    return 0;
}