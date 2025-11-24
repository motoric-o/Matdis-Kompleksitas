#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 1;
    cin >> n;

    for (int i = n; i > 0; i--) {
        total *= i;
    }

    cout << "Faktorial: " << total << endl;

    return 0;
}