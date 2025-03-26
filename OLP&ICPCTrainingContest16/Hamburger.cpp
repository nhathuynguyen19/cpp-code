#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> times(n);
    vector<bool> mark(n);

    for (int i = 0; i < n; i++)
    {
        cin >> times[i];
    }

    sort(times.begin(), times.end());

    double cake1Sec = 0.0;
    for (int i = 0; i < n; ++i)
    {
        cake1Sec = cake1Sec + (double) (1.0/(double)times[i]);
    }

    int dem = 0;
    for(int i = 1; i > 0; ++i)
    {
        
        dem++;
        // cout << cake1Sec << endl;
        if(cake1Sec >= m)
        {
            cout << dem + times[0] << endl;
            break;
        }
        cake1Sec += cake1Sec;
    }

    return 0;
}
