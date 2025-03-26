#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    int min_value = a[1]; 

    for (int i = 2; i <= n; i++)
    {
        if (a[i] <= min_value)
        {
            count++;
        }
        min_value = min(min_value, a[i]);
    }

    cout << count << endl;
    return 0;
}
