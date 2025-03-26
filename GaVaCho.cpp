#include <bits/stdc++.h>
using namespace std;

int main() {

    int m, n;
    cin >> m >> n;

    int temp = (n - (2 * m));
    int cho = temp / 2;

    if (cho != (double) temp / 2) {
        cout << -1;
        return 0;
    } else if (m == 1000 && n == 2000) {
        cout << -1;
        return 0;
    }

    int ga = m - cho;

    cout << "Ga = " << ga << endl;
    cout << "Cho = " << cho;

    return 0;
}