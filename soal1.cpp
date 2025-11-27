#include <iostream>
using namespace std;

int main() {
    int n;
    int bilangan;
    double total = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> bilangan;
        total += bilangan;
    }

    cout << "Rata-rata: " << total/n << endl;

    return 0;
}