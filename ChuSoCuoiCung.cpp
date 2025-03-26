#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long c = (long long) pow(a, b) % 10;
    cout << c;

    return 0;
}