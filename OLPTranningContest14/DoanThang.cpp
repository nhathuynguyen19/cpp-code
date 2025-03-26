#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    // khai bao doan thang
    vector<vector<long long>> edge(t, vector<long long>(4));

    // nhap do dai
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> edge[i][j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        // sap xep theo do dai tu thap den cao
        sort(edge[i].begin(), edge[i].end(), [](long long a, long long b) {
            return a < b; 
        });

        cout << edge[i][0] * edge[i][2] << endl;
    }
    return 0;
}