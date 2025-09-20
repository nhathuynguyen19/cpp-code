#include <iostream>
#include <iomanip>
#include <cmath>

long long giaiThua(long long n)
{
    if (n == 0.0)
        return 1.0;
    else
    {
        return n * giaiThua(n - 1.0);
    }
}

// tinh tong
long double sumCal(long double S, long double x)
{
    long double xMuN = 1.0;
    long double nGiaiThua = 1.0;

    for (long long n = 0.0;; ++n)
    {
        if (n > 0.0)
        {
            xMuN = xMuN * x;
            nGiaiThua = giaiThua(n);
        }

        long double rs = (long double)xMuN / nGiaiThua;
        if (rs < 1e-9)
        {
            break;
        }

        S = S + rs;
    }
    return S;
}

int main()
{
    long double S = 0.0;
    long double x = 0.0;
    std::cin >> x;
    long double rs = sumCal(S, x);
    std::cout << std::fixed << std::setprecision(4) << rs;
}