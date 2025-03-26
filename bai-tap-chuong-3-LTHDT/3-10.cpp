#include <iostream>
#include <math.h>
using namespace std;

// tim uoc chung lon nhat
int UCLN(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return UCLN(b, a % b);
    }
}

// rut gon
void rutgon(int &a, int &b)
{
    int ucln = UCLN(a, b);
    a = a / ucln;
    b = b / ucln;
}

class PhanSo
{
private:
    int tu;
    int mau;

public:
    // truy cap tham chieu
    int &TCTu()
    {
        return tu;
    }
    int &TCMau()
    {
        return mau;
    }
    // truy cap gia tri
    int Tu()
    {
        return tu;
    }
    int Mau()
    {
        return mau;
    }

    // nhap
    void nhap()
    {
        cout << "tu so: ";
        cin >> TCTu();
        cout << "mau so: ";
        cin >> TCMau();
    }

    // xuat
    void xuat(bool useEndl)
    {
        rutgon(TCTu(), TCMau());
        cout << Tu() << "/" << Mau();
        if (useEndl)
        {
            cout << endl;
        }
    }

    // cong
    PhanSo add(PhanSo b)
    {
        PhanSo result;

        result.TCTu() = (Tu() * b.Mau()) + (b.Tu() * Mau());
        result.TCMau() = Mau() * b.Mau();
        return result;
    }

    // tru
    PhanSo subtract(PhanSo b)
    {
        PhanSo result;

        result.TCTu() = (Tu() * b.Mau()) - (b.Tu() * Mau());
        result.TCMau() = Mau() * b.Mau();
        return result;
    }

    // nhan
    PhanSo multiple(PhanSo b)
    {
        PhanSo result;

        result.TCTu() = Tu() * b.Tu();
        result.TCMau() = Mau() * b.Mau();
        return result;
    }

    // chia
    PhanSo divide(PhanSo b)
    {
        PhanSo result;

        result.TCTu() = Tu() * b.Mau();
        result.TCMau() = Mau() * b.Tu();
        return result;
    }
};

int main()
{
    PhanSo a, b, t;

    cout << "nhap phan so a:" << endl;
    a.nhap();
    cout << "nhap phan so b:" << endl;
    b.nhap();

    cout << a.Tu() << "/" << a.Mau() << " + " << b.Tu() << "/" << b.Mau() << " = ";
    a.add(b).xuat(1);

    cout << a.Tu() << "/" << a.Mau() << " - " << b.Tu() << "/" << b.Mau() << " = ";
    a.subtract(b).xuat(1);

    cout << a.Tu() << "/" << a.Mau() << " * " << b.Tu() << "/" << b.Mau() << " = ";
    a.multiple(b).xuat(1);

    cout << a.Tu() << "/" << a.Mau() << " / " << b.Tu() << "/" << b.Mau() << " = ";
    a.divide(b).xuat(1);

    return 0;
}