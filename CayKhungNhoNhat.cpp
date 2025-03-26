#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class node
{
private:
    int N, D;
    vector<int> A;

public:
    // setter
    // getter

    // nhap
    void nhap()
    {
        cin >> N >> D;
        for (int i = 0; i < N; ++i)
        {
            int temp;
            cin >> temp;
            A.push_back(temp);
        }
    }

    // return trong so
    int trongSo(int i, int j)
    {
        return abs(i - j) * D + A[i] + A[j];
    }

    // find do dai day khung nho nhat
    void minDayKhung()
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            int temp = 0;
            for (int j = i + 1; j < N; j++)
            {
                if (j == i + 1) {
                    temp = trongSo(i, j);
                }
                else if (temp >= trongSo(i, j))
                {
                    temp = trongSo(i, j);
                }
            }
            cout << temp << endl;
            sum = sum + temp;
        }
        // return sum;
    }
};

int main()
{
    node a;
    a.nhap();
    a.minDayKhung();
}