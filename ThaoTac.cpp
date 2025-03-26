#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = N; i >= 1; i--)
    {
        if (i % 2 == 0)
        {
            if (log(i) / log(2) == (int)(log(i) / log(2)))
            {
                cout << i;
                break;
            }
        }
    }
    return 0;
}