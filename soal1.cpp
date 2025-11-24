#include <iostream>
using namespace std;

int main() {
    int n;
    int bilangan;
    int total = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> bilangan;
        total += bilangan;
    }

    cout << "Rata-rata: " << (double)total/n << endl;

    return 0;
}