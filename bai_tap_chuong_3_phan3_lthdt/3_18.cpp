#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NhanVien // class nhan vien
{
private:
    string ma_nhan_vien;
    string ho_ten_nhan_vien;
    int so_dien_thoai;

public:
    NhanVien *next;
    NhanVien(string id, string name, int number) : ma_nhan_vien(id), ho_ten_nhan_vien(name), so_dien_thoai(number), next(NULL) {}

    // setter
    void setID(string ma_nhan_vien);
    void setName(string ho_ten_nhan_vien);
    void setNumber(int so_dien_thoai);

    // getter
    string getID();
    string getName();
    int getNumber();
};
class QuanLy // class quan ly
{
private:
    NhanVien *first;
    int n;

public:
    QuanLy() : first(NULL), n(0) {}
    void insertFirst(string id, string name, int number); // chen nhan vien vao dau danh sach
    void nhap();                                          // ham nhap
    void sapXep();                                        // sap xep tang dan theo ten
    void duyet();                                         // duyet
    void search(string id);                               // tim kiem theo ma nhan vien
};
void QuanLy::insertFirst(string id, string name, int number) // chen nhan vien vao dau danh sach
{
    NhanVien *nv = new NhanVien(id, name, number);
    // cout << "log" << endl;
    nv->next = first;
    first = nv;
    n++;
}
void QuanLy::nhap() // nhap nhan vien
{
    string id;
    cout << "nhap msv: ";
    while (getline(cin, id) && !id.empty())
    {
        string name;
        int number;

        cout << "nhap ho ten: ";
        getline(cin, name);
        cout << "nhap sdt: ";
        cin >> number;
        cin.ignore();

        insertFirst(id, name, number);
        cout << "nhap msv: ";
    }
}
void QuanLy::sapXep() // sap xep tang dan theo ten
{
    for (NhanVien *i = first; i->next != NULL; i = i->next)
    {
        for (NhanVien *j = i; j != NULL; j = j->next)
        {
            if (i->getName() > j->getName())
            {
                string t_id = i->getID();
                string t_name = i->getName();
                int t_number = i->getNumber();

                i->setID(j->getID());
                i->setName(j->getName());
                i->setNumber(j->getNumber());

                j->setID(t_id);
                j->setName(t_name);
                j->setNumber(t_number);
            }
        }
    }
}
void QuanLy::duyet() // duyet danh sach quan ly
{
    cout << endl;
    cout << "Danh sach nhan vien:" << endl;
    cout << setw(12) << "Ma nhan vien" << setw(30) << "Ho ten nhan vien" << setw(15) << "So Dien Thoai" << endl;
    for (NhanVien *i = first; i != NULL; i = i->next)
    {
        cout << setw(12) << i->getID() << setw(30) << i->getName() << setw(15) << i->getNumber() << endl;
    }
}
void QuanLy::search(string id) // tim kiem theo ma nhan vien
{
    cout << endl;
    cout << "Ket Qua Tim Kiem:" << endl;
    for (NhanVien *t = first; t != NULL; t = t->next)
    {
        if (t->getID() == id)
        {
            cout << setw(12) << "Ma nhan vien" << setw(30) << "Ho ten nhan vien" << setw(15) << "So Dien Thoai" << endl;
            cout << setw(12) << t->getID() << setw(30) << t->getName() << setw(15) << t->getNumber() << endl;
            return;
        }
    }
    cout << "Not Found!";
}
void NhanVien::setID(string ma_nhan_vien) // set ma nhan vien
{
    this->ma_nhan_vien = ma_nhan_vien;
}
void NhanVien::setName(string ho_ten_nhan_vien) // set ho ten nhan vien
{
    this->ho_ten_nhan_vien = ho_ten_nhan_vien;
}
void NhanVien::setNumber(int so_dien_thoai) // set so dien thoai nhan vien
{
    this->so_dien_thoai = so_dien_thoai;
}
string NhanVien::getID() // get ma nhan vien
{
    return this->ma_nhan_vien;
}
string NhanVien::getName() // get ho ten nhan vien
{
    return this->ho_ten_nhan_vien;
}
int NhanVien::getNumber() // get so dien thoai nhan vien
{
    return this->so_dien_thoai;
}
int main() // main
{
    QuanLy quan_ly_1;
    quan_ly_1.nhap();
    quan_ly_1.sapXep();
    quan_ly_1.duyet();
    quan_ly_1.search("2");
}