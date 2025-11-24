#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bilangan;
    int max = 0;

    for (int i=0; i < n; i++) {
        cin >> bilangan;
        if (bilangan > max) {
            max = bilangan;
        }
    }

    cout << "Max: " << max << endl;

    return 0;
}