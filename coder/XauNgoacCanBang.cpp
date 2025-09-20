#include <iostream>
using namespace std;

bool dk(char x) {
    return x == '(';
}

int main()
{
    int stack = 0, count = 0, n;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (dk(s[i])) {
            stack++;
        }
        else {
            if (stack == 0) {
                count++;
            } else {
                stack--;
            }
        }
    }
    cout << count + stack;
}