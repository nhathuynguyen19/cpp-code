#include <iostream>
#include <string>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.inp", "r", stdin);
    #endif

    string s;
    int t = 65;
    int d[27];
    long long sum = 0;
    char c;

    // Khởi tạo mảng d
    for (int i = 0; i < 27; ++i) {
        d[i] = (i == 0) ? 32 : t++;
    }

    while (getline(cin, s)) {
        if (s.length() == 1) {
            c = s[0];
        }

        if (c == '#') {
            break;
        }

        for (size_t i = 0; i < s.length(); ++i) {
            for (int j = 0; j < 27; ++j) {
                if (d[j] == s[i]) {
                    sum += static_cast<long long>((i + 1) * j);
                }
            }
        }

        cout << sum << endl;
        sum = 0;
    }

    return 0;
}
