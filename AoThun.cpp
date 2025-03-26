#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void log1(int aoTrang, int aoDen, int tongAoDen, char x)
{
    cout << "ao trang: " << aoTrang << ", " << "ao den: " << aoDen << ", " << x << ", " << tongAoDen << endl;
}

int main()
{
    int N, M;
    string S;

    cin >> N >> M;
    cin.ignore();
    getline(cin, S);

    int aoTrang = M;
    int aoDen = 0;
    int tongAoDen = 0;

    // cout << "ban dau: " << "ao trang: " << aoTrang << ", " << "ao den: " << aoDen << endl;
    for (int i = 0; i < N; ++i)
    {
        if (S[i] == '1') // co the mac trang hoac den
        {

            if (aoTrang > 0) // neu con ao trang
            {
                aoTrang--;
            }
            else if (aoTrang == 0) // neu het ao trang
            {
                if (aoDen > 0) // con ao den thi
                {
                    aoDen--;
                }
                else if (aoDen == 0) // het ao den
                {
                    tongAoDen++;
                }
            }
        }
        else if (S[i] == '2') // phai mac ao den
        {
            if (aoDen > 0) // neu con ao den
            {
                aoDen--;
            }
            else if (aoDen == 0) // neu het ao den
            {
                tongAoDen++;
            }
        }
        else if (S[i] == '0') // khong mac ao, giat tat ca do da mac
        {
            aoDen = tongAoDen;
            aoTrang = M;
        }
        // log1(aoTrang, aoDen, tongAoDen, S[i]);
    }

    cout << tongAoDen << endl;
    return 0;
}