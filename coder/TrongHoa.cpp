#include <bits/stdc++.h>
using namespace std;

void log1(vector<vector<int>> ruleEachPoint, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ruleEachPoint[i][j] << " ";
        }
        cout << endl;
    }
}

void main1()
{
    int n;
    cin >> n;
    vector<vector<int>> rules(n, vector<int>(2));
    vector<int> listHoa(n);
    vector<vector<int>> ruleEachPoint(n, vector<int>(n));

    // nhap luat
    for (int i = 0; i < n; i++)
    {
        cin >> rules[i][0] >> rules[i][1];
    }

    // dat ruleEachPoint
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ruleEachPoint[i][j] = 1;
        }
    }

    // xac dinh hoa duoc trong xung quanh theo tung vi tri
    for (int i = 0; i < n; i++)
    {
        int temp;
        // ben trai dong i cot i
        for (int l = 1; l <= rules[i][0]; l++)
        {
            temp = i - l;
            if (temp >= 0)
            {
                ruleEachPoint[i][temp] = 0;
            }
            else
            {
                break;
            }
        }

        // ben phai dong i cot i
        for (int r = 1; r <= rules[i][1]; r++)
        {
            temp = i + r;
            if (temp < n)
            {
                ruleEachPoint[i][temp] = 0;
            }
            else
            {
                break;
            }
        }
    }

    // log1(ruleEachPoint, n);

    for (int i = 0; i < n; i++)
    {
        vector<int> ruleRow(n);
        // lay tam dong hoa i
        for (int t = 0; t < n; t++)
        {
            ruleRow[t] = ruleEachPoint[i][t];
        }

        // and wise dong i va cac dong j
        for (int j = 0; j < n; j++)
        {
            if (ruleEachPoint[j][i] == 1)
            {
                for (int t = 0; t < n; t++)
                {
                    ruleRow[t] = ruleRow[t] && ruleEachPoint[j][t];
                    if (ruleEachPoint[j][t] == 1 && ruleRow[t] == 1)
                    {
                        ruleRow[t] = 1;
                    }
                    else
                    {
                        ruleRow[t] = 0;
                    }
                }
            }
        }

        // tinh tong hoa dong i co the trong
        int sum = 0;
        for (int t = 0; t < n; t++)
        {
            if (ruleRow[t] != 0)
            {
                sum++;
            }
        }
        listHoa[i] = sum;
    }

    int max = listHoa[0];
    for (int i = 1; i < n; i++)
    {
        if (listHoa[i] > max)
        {
            max = listHoa[i];
        }
    }

    cout << max;
}

int main()
{
    int n;
    cin >> n;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> a;
    }

    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        dem++;
        i = i + a;
    }
    cout << dem;
}
