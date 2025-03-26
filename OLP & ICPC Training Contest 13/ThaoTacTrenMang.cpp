#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    long long max = a[0];
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    // cout << max;

    for (int i = 0; i < n; i++) {
        if (max == a[i]) {
            pos = i;
            a[i] = 0;
            break;
        }
    }

    for (int i = 0; i < k; i++) {
        max = max * 2;
    }

    // cout << max;

    long long sum = max;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    
    cout << sum << endl;
    
    return 0;
}