#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// lop chuyen xe (lop cha)
class ChuyenXe
{
protected:
    string machuyen;
    string driverName;
    string carNum;
    double doanhThu;

public:
    // get doanh thu
    double get_doanhThu()
    {
        return doanhThu;
    }

    // nhap
    virtual void nhap()
    {
        cout << "ma chuyen: ";
        cin >> machuyen;
        cin.ignore();
        cout << "ten tai xe: ";
        getline(cin, driverName);
        cout << "so xe: ";
        cin >> carNum;
        cout << "doanh thu: ";
        cin >> doanhThu;
        cin.ignore();
    }

    // xuat
    virtual void xuat()
    {
        cout << setw(30) << "ma chuyen: " << machuyen << endl;
        cout << setw(30) << "ten tai xe: " << driverName << endl;
        cout << setw(30) << "so xe: " << carNum << endl;
        cout << setw(30) << "doanh thu: " << doanhThu << endl;
    }
};

// lop chuyen xe noi thanh (lop con)
class NoiThanh : public ChuyenXe
{
private:
    int soTuyen;
    double soKm;

public:
    // nhap
    void nhap() override
    {
        ChuyenXe::nhap();
        cout << "so tuyen: ";
        cin >> soTuyen;
        cout << "so km: ";
        cin >> soKm;
    }

    // xuat
    void xuat() override
    {
        ChuyenXe::xuat();
        cout << setw(30) << "so tuyen: " << soTuyen << endl;
        cout << setw(30) << "so km: " << soKm << endl;
    }
};

// lop chuyen xe ngoai thanh (lop con)
class NgoaiThanh : public ChuyenXe
{
private:
    string noiDen;
    double soNgayDiDuoc;

public:
    
    // nhap
    void nhap() override
    {
        ChuyenXe::nhap();
        cout << "noi den: ";
        getline(cin, noiDen);
        cout << "so ngay di duoc: ";
        cin >> soNgayDiDuoc;
    }

    // xuat
    void xuat() override
    {
        ChuyenXe::xuat();
        cout << setw(30) << "noi den: " << noiDen << endl;
        cout << setw(30) << "so ngay di duoc: " << soNgayDiDuoc << endl;
    }
};

int main()
{
    int slNoiThanh, slNgoaiThanh;
    double tongDoanhThuNoiThanh = 0, tongDoanhThuNgoaiThanh = 0;

    cout << "so luong xe noi thanh: ";
    cin >> slNoiThanh;
    NoiThanh noiThanh[slNoiThanh];

    cout << "so luong xe ngoai thanh: ";
    cin >> slNgoaiThanh;
    NgoaiThanh ngoaiThanh[slNgoaiThanh];

    for (int i = 0; i < slNoiThanh; ++i)
    {
        cout << "xe noi thanh " << i + 1 << " :" << endl;
        noiThanh[i].nhap();
        tongDoanhThuNoiThanh += noiThanh[i].get_doanhThu();
    }

    for (int i = 0; i < slNgoaiThanh; ++i)
    {
        cout << "xe ngoai thanh " << i + 1 << " :" << endl;
        ngoaiThanh[i].nhap();
        tongDoanhThuNgoaiThanh += ngoaiThanh[i].get_doanhThu();
    }

    cout  << "--------------------" << endl;

    cout << "danh sach xe noi thanh:" << endl;
    for (int i = 0; i < slNoiThanh; ++i)
    {
        cout << "xe noi thanh " << i + 1 << " :" << endl;
        noiThanh[i].xuat();
        cout  << "----------" << endl;
    }

    cout << "danh sach xe ngoai thanh:" << endl;
    for (int i = 0; i < slNgoaiThanh; ++i)
    {
        cout << "xe ngoai thanh " << i + 1 << " :" << endl;
        ngoaiThanh[i].xuat();
        cout  << "----------" << endl;
    }

    cout << "tong doanh thu noi thanh: " << tongDoanhThuNoiThanh << endl;
    cout << "tong doanh thu ngoai thanh: " << tongDoanhThuNgoaiThanh << endl;

    return 0;
}