#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int *p;
    int n;
    cout << "\n So phan tu : ";
    cin >> n;
    p = new int[n];
    if (p == NULL)
    {
        cout << "Loi cap phat bo nho";
        exit(1);
    }
    return 0;
}