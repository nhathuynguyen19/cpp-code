#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    // Tìm tất cả các số nguyên tố nhỏ hơn hoặc bằng sqrt(n)
    vector<int> primes;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime(i))
        {
            primes.push_back(i);
        }
    }

    // Duyệt qua tất cả các bộ ba (p, q, r)
    int count = 0;
    for (int p : primes)
    {

        for (int q : primes)
        {

            for (int r : primes)
            {
                if (p >= sqrt(n) || q >= cbrt(n) || r >= sqrt(sqrt(n)))
                    break;

                if (p * p + q * q * q + r * r * r * r <= n)
                {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}
