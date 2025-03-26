#include <iostream>
using namespace std;

class B;

class A
{
private:
    int m;
public:
    void nhap();
    void xuat();
    friend void swap(A &ob1, B &ob2);
};

class B
{
private:
    int m;
public:
    void nhap();
    void xuat();
    friend void swap(A &ob1, B &ob2);
};

void A::nhap() 
{
    cin >> m;
}

void A::xuat() 
{
    cout << m << endl;
}

void B::nhap() 
{
    cin >> m;
}

void B::xuat() 
{
    cout << m << endl;
}

void swap(A &ob1, B &ob2) 
{
    int t = ob1.m;
    ob1.m = ob2.m;
    ob2.m = t;
}

int main() {
    A ob1;
    B ob2;

    ob1.nhap();
    ob2.nhap();

    ob1.xuat();
    ob2.xuat();

    swap(ob1, ob2);

    ob1.xuat();
    ob2.xuat();

    return 0;
}
