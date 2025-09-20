#include <iostream>
using namespace std;
int N; // so_doi_thi
int S; // so_doi_hong_hoa
int R; // so_doi_mang_hoa_du_tru
void DoiBiLoaiItNhat(int, int, int);

int main()
{
    cin >> N >> S >> R;
    DoiBiLoaiItNhat(N, S, R);
    return 0;
}
//hàm tìm số đội ít nhất không tham gia được
void DoiBiLoaiItNhat(int N, int S, int R)
{
    int B[3][N + 1] = {0}; // bảng đội hỏng, có và cắm đc
    int B_h[S];      // lưu tạm đội hỏng
    int B_c[R];      // lưu tạm đội có hoa dự trữ
    
    // nhập lần lượt tên các nhóm bị hỏng hoa
    for (int i = 0; i < S; ++i)
    {
        cin >> B_h[i];
        B[1][B_h[i]] = 1;
    }
    
    // nhập lần lượt tên các nhóm có hoa dự trữ
    for (int i = 0; i < R; ++i)
    {
        cin >> B_c[i];
        B[2][B_c[i]] = 1;
    }
    
    //thuật toán tìm số đội ít nhất không tham gia được
    int dem = N;
    for (int i = 1; i <= N; ++i)
    {
        if (B[1][i] == 0)
        {
            --dem;
        }
        else if (B[1][i] == 1)
        {
            if (B[2][i] == 0)
            {
                if (i > 1 && i < N)
                {
                    if (B[2][i - 1] == 1)
                    {
                        B[2][i - 1] = 0;
                        --dem;
                    }
                    else if (B[2][i - 1] == 0)
                    {
                        if (B[2][i + 1] == 1)
                        {
                            B[2][i + 1] = 0;
                            --dem;
                        }
                    }
                }
                else if (i == 1 || i == N)
                {
                    if (i == 1)
                    {
                        if (B[2][i + 1] == 1)
                        {
                            B[2][i + 1] = 0;
                            --dem;
                        }
                    }
                    else if (i == N)
                    {
                        if (B[2][i - 1] == 1)
                        {
                            B[2][i - 1] = 0;
                            --dem;
                        }
                    }
                }
            }
            else if (B[2][i] == 1)
            {
                B[2][i] = 0;
                --dem;
            }
        }
    }

    //in kết quả
    cout << dem;
}
