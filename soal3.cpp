#include <iostream>
using namespace std;

long long int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    long long int total = factorial(n);

    cout << "Faktorial: " << total << endl;

    return 0;
}