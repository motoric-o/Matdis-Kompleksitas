#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bilangan;
    int max = 0;
    int min = INT_MAX;

    for (int i=0; i < n; i++) {
        cin >> bilangan;
        if (bilangan > max) {
            max = bilangan;
        }
        if (bilangan < min) {
            min = bilangan;
        }
    }

    cout << "Range: " << max-min << endl;

    return 0;
}