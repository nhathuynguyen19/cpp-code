#include <iostream>
using namespace std;

int main() {
    int u, v;
    cin >> u >> v;

    if (v == 2 * u || v == 2 * u + 1 || u == 2 * v || u == 2 * v + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
