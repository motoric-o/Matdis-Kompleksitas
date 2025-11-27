#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    // Langkah 2: Cek bilangan ganjil dari 3 s.d akar n
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    // Langkah 3: Jika n masih > 2, berarti sisanya adalah prima
    if (n > 2) {
       cout << n << " ";
    }

    return 0;
}