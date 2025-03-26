#include <iostream>
#include <vector>
using namespace std;

class Bien
{
private:
    int N, K, A, B, P = 0, E = 0;
    vector<vector<int>> cacThaoTac;
    vector<vector<int>> maTran; // Ma trận tổng

public:
    void nhap()
    {
        cin >> N >> K;
        cacThaoTac.resize(K, vector<int>(4));
        maTran.resize(N, vector<int>(N, 0)); // Khởi tạo ma trận tổng với kích thước N x N
        for (int i = 0; i < K; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                cin >> cacThaoTac[i][j];
            }
        }
        cin >> A >> B;
    }

    void thaoTac()
    {
        // Áp dụng tất cả các thao tác vào ma trận tổng
        for (int thao_tac = 0; thao_tac < K; ++thao_tac)
        {
            int r1 = cacThaoTac[thao_tac][0];
            int r2 = cacThaoTac[thao_tac][1];
            int c1 = cacThaoTac[thao_tac][2];
            int c2 = cacThaoTac[thao_tac][3];
            for (int i = r1; i <= r2; i++)
            {
                for (int j = c1; j <= c2; j++)
                {
                    maTran[i][j]++;
                }
            }
        }

        // Tính P và E từ ma trận tổng
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int count = maTran[i][j];
                if (count > 0)
                {
                    if (count == 1)
                    {
                        P++;
                    }
                    else if (count % 2 == 0 && count != 0)
                    {
                        E++;
                    }
                }
            }
        }
    }

    int giaTriBieuThuc()
    {
        return P * A + E * B;
    }

    void xuat()
    {
        int x = giaTriBieuThuc();
        cout << x << endl;
    }
};

int main()
{
    Bien a;
    a.nhap();
    a.thaoTac();
    a.xuat();
    return 0;
}
