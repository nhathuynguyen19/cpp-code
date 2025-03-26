// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <complex>
#include <utility>
#include <vector>

using namespace std;
// begin

// câu hỏi

// 2.1
// biến tham chiếu là bí danh của một biến khác đã được đặt trước đó và sử dụng vùng nhớ của biến này, mọi thay đổi của bí danh và biến gốc đều có ý nghĩa như nhau
// ví dụ:
void e21()
{
    int a;
    int &b = a;
}

// 2.2
// vì là hàm trả về tham chiếu nên return biến có phạm vi bên trong hàm (array) sẽ không có ý nghĩa

// 2.3
// hàm với tham số có giá trị mặc định là hàm được khởi gán giá trị mặc định đáp ứng các điều kiện các tham số mặc định cần nằm cuối cùng tính từ trái qua phải, chỉ được khởi gán trong nguyên mẫu hàm không được gán lại giá trị mặc định khi định nghĩa lại hàm
// ví dụ
void quoctich(string name = "rong", string quocgia = "vietnam")
{
    cout << name << endl
         << quocgia;
}

// 2.4
// hàm nội tuyến là hàm giúp chèn trực tiếp mã nguồn trong hàm vào chỗ gọi hàm
// ví dụ
inline void e24()
{
    cout << "hello world";
}

// 2.5
// hàm tải bội cho phép nhiều hàm có thể có cùng tên nhưng khác nhau về kiểu dữ liệu hoặc số lượng tham số, trình biên dịch sẽ chọn ra hàm nào phù hợp tùy thuộc vào tham số được truyền vào
// ví dụ
int summon(int a, int b)
{
    return a + b;
}

double summon(double a, double b)
{
    return a + b;
}

// 2.6
// kiểu dữ liệu trả về của hàm không phải là dấu hiệu để phân biệt, số lượng tham số và kiểu dữ liệu giống nhau nên sẽ gây ra lỗi biên dịch

// bài tập

// 2.7
struct Student
{
    string studentID;
    string name;
    string classStudent;
    float dtb;
};

int n;
Student *sv;

// ham cout nhap lai
inline void nhaplai()
{
    cout << "yeu cau nhap lai: ";
}

// code can thuc thi neu cin.fail()
void cinFail()
{
    nhaplai();
    cin.clear();
    cin.ignore(1000, '\n');
}

// hàm nhập
void inputSinhVien(Student *&sv, int &n)
{
    cout << "nhap n: ";
    cin >> n;
    cin.ignore();
    sv = new Student[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "nhap MSV " << i + 1 << ": ";
        getline(cin, sv[i].studentID);
        cout << setw(20) << "nhap ten SV: ";
        getline(cin, sv[i].name);
        cout << setw(20) << "nhap lop: ";
        getline(cin, sv[i].classStudent);
        cout << setw(20) << "diem trung binh: ";
        do
        {
            if (cin.fail())
            {
                cinFail();
            }
            cin >> sv[i].dtb;
        } while (cin.fail());
        cin.ignore();
    }
}

// ham swap
void swap(Student &a, Student &b)
{
    Student temp;
    temp = a;
    a = b;
    b = temp;
}

// hàm sắp xếp
void sapxepSinhVien(Student *&sv, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].dtb < sv[j].dtb)
            {
                swap(sv[i], sv[j]);
            }
        }
    }
}

// in sinh vien theo diem trung binh
void output(Student *sv, int n)
{
    cout << endl;
    cout << setw(14) << "Ma Sinh Vien" << setw(25) << "Ten Sinh Vien" << setw(12) << "Lop" << setw(17) << "Diem Trung Binh" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(14) << sv[i].studentID << setw(25) << sv[i].name << setw(12) << sv[i].classStudent << setw(17) << sv[i].dtb << endl;
    }
    delete[] sv;
}

// main 2.7
void baitap2_7()
{
    cout << "2.7: " << endl
         << endl;
    inputSinhVien(sv, n);
    sapxepSinhVien(sv, n);
    output(sv, n);
    cout << endl
         << "----------" << endl;
}

// 2.8

const double PI = 3.14159265358979323846;

// dien tich hinh tron
double area(double a)
{
    return PI * pow(a, 2);
}

// dien tich hinh chu nhat
double area(double a, double b)
{
    return a * b;
}

// dien tich hinh tam giac
double area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// ham kiem tra cin
void cinCheck(double &a)
{
    do
    {
        if (cin.fail())
        {
            cinFail(); // muon ham 2.7
        }
        cin >> a;
        if (a <= 0 && !cin.fail())
        {
            nhaplai(); // muon ham 2.7
        }
    } while (a <= 0 || cin.fail());
}

// main 2.8
void baitap2_8()
{
    cout << "2.8: " << endl
         << endl;
    int temp;
    cout << "ban muon tinh dien tich hinh gi:" << endl
         << "'1': Hinh Tron" << endl
         << "'2': Hinh Chu Nhat" << endl
         << "'3': Hinh Tam Giac" << endl;
    do
    {
        cout << "chon so tuong ung: ";
        cin >> temp;
        if (temp <= 3 && temp >= 1)
        {
            if (temp == 1)
            {
                double a;
                cout << "nhap ban kinh hinh tron: ";
                cinCheck(a);
                cout << "dien tich hinh tron la: " << area(a) << " m^2" << endl;
            }
            else if (temp == 2)
            {
                double a;
                double b;
                cout << "chieu rong: ";
                cinCheck(a);
                cout << "chieu dai: ";
                cinCheck(b);
                cout << "dien tich hinh chu nhat la: " << area(a, b) << " m^2" << endl;
            }
            else
            {
                double a;
                double b;
                double c;
                do
                {
                    cout << "canh a: ";
                    cinCheck(a);
                    cout << "canh b: ";
                    cinCheck(b);
                    cout << "canh c: ";
                    cinCheck(c);

                    if (a + b <= c || a + c <= b || c + b <= a)
                    {
                        nhaplai();
                        cout << endl;
                    }
                } while (a + b <= c || a + c <= b || c + b <= a);
                cout << "dien tich tam giac la: " << area(a, b, c) << " m^2" << endl;
            }
        }
        else
        {
            nhaplai();
            cout << endl;
        }
    } while (temp > 3 || temp < 1);
    cout << endl
         << "----------" << endl;
}

// 2.9

// ham giai phuong trinh bac nhat
double solve(double a, double b)
{
    return (-b / a);
}

// ham tinh delta
int deltaCal(double a, double b, double c)
{
    double delta = pow(b, 2) - 4.0 * a * c;
    if (delta < 0)
    {
        return -1;
    }
    else if (delta == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// ham giai phuong trinh bac hai
pair<complex<double>, complex<double>> solve(double a, double b, double c)
{
    complex<double> delta = pow(b, 2) - 4.0 * a * c;
    complex<double> sqrt_delta = sqrt(delta);

    complex<double> x1 = (-b + sqrt_delta) / (2.0 * a);
    complex<double> x2 = (-b - sqrt_delta) / (2.0 * a);
    return make_pair(x1, x2);
}

// main 2_9
void baitap2_9()
{
    cout << "2.9: " << endl
         << endl;
    cout << "ban muon giai phuong trinh bac may: " << endl;
    cout << "'1': phuong trinh bac nhat" << endl;
    cout << "'2'; phuong trinh bac 2" << endl;
    cout << "chon gia tri tuong ung: ";

    int temp;
    cin >> temp;

    if (temp == 1)
    {
        double a;
        double b;

        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "x = " << solve(a, b) << endl;
    }
    else if (temp == 2)
    {
        double a;
        double b;
        double c;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        auto [x1, x2] = solve(a, b, c);
        if (deltaCal(a, b, c) == -1)
        {
            cout << "x1 = " << x1.real();
            if (x1.imag() > 0)
            {
                cout << " + " << x1.imag() << "i" << endl;
            }
            else if (x1.imag() < 0)
            {
                cout << " - " << abs(x1.imag()) << "i" << endl;
            }

            cout << "x2 = " << x2.real();
            if (x2.imag() > 0)
            {
                cout << " + " << x2.imag() << "i" << endl;
            }
            else if (x2.imag() < 0)
            {
                cout << " - " << abs(x2.imag()) << "i" << endl;
            }
        }
        else if (deltaCal(a, b, c) == 0)
        {
            cout << " x = " << x1.real() << endl;
        }
        else if (deltaCal(a, b, c) == 1)
        {
            cout << " x1 = " << x1.real() << endl;
            cout << " x2 = " << x2.real() << endl;
        }
    }
    cout << "ket thuc chuong trinh!" << endl;
    cout << endl
         << "----------" << endl;
}

// 2.10

// ham tim uoc so
vector<int> findUocSo(int a)
{
    vector<int> listUoc;

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            listUoc.push_back(i);
        }
    }
    return listUoc;
}

// ham tim uoc chung
int uocchung(vector<int> a, vector<int> b)
{
    for (int i = a.size() - 1; i >= 0; --i)
    {
        for (int j = b.size() - 1; j >= 0; --j)
        {
            if (a[i] == b[j])
            {
                return a[i];
            }
            if (a[i] > b[j])
            {
                break;
            }
            if (a[i] < b[j])
            {
                continue;
            }
        }
    }
    return 1;
}

// ham cong 2 phan so
pair<int, int> add(pair<int, int> a, pair<int, int> b)
{
    int mauchung = a.second * b.second;
    a.first *= b.second;
    b.first *= a.second;
    int tuso = a.first + b.first;
    vector<int> listUocTu = findUocSo(tuso);
    vector<int> listUocMau = findUocSo(mauchung);
    int uocso = uocchung(listUocTu, listUocMau);
    tuso = tuso / uocso;
    mauchung = mauchung / uocso;
    return make_pair(tuso, mauchung);
}

// ham cong 2 vector
vector<int> add(vector<int> a, vector<int> b)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] += b[i];
    }
    return a;
}

// main 2.10
void baitap2_10()
{
    cout << "2.10: " << endl
         << endl;
    int temp;
    cout << "'1': cong 2 phan so" << endl;
    cout << "'2': cong 2 vector" << endl;
    cout << "chon yeu cau: ";
    cin >> temp;
    if (temp == 1)
    {
        int a, b, c, d;
        cout << "nhap phan so a: " << endl;
        cout << "tu so: ";
        cin >> a;
        cout << "mau so: ";
        cin >> c;

        cout << "nhap phan so b: " << endl;
        cout << "tu so: ";
        cin >> b;
        cout << "mau so: ";
        cin >> d;

        pair<int, int> A = {a, c};
        pair<int, int> B = {b, d};
        auto [x, y] = add(A, B);
        cout << a << "/" << c << " + " << b << "/" << d << " = " << x << "/" << y << endl;
    }
    else if (temp == 2)
    {
        int n;
        cout << "nhap do dai vector: ";
        cin >> n;
        if (n > 0 && n <= 10)
        {
            vector<int> a;
            vector<int> b;
            cout << "nhap " << n << " phan tu vector a: ";
            for (int i = 0; i < n; ++i)
            {
                int temp;
                cin >> temp;
                a.push_back(temp);
            }
            cout << "nhap " << n << " phan tu vector b: ";
            for (int i = 0; i < n; ++i)
            {
                int temp;
                cin >> temp;
                b.push_back(temp);
            }
            vector<int> sum = add(a, b);
            cout << "vector a + vector b = ";
            cout << "(";
            for (int i = 0; i < n; i++)
            {
                cout << sum[i];
                if (i != n - 1)
                {
                    cout << ", ";
                }
            }
            cout << ")" << endl;
        }
        else
        {
            cout << "ket thuc chuong trinh!" << endl;
        }
    }
    cout << "ket thuc chuong trinh!" << endl;
    cout << endl
         << "----------" << endl;
}

// 2.11

// tich vo huong 2 vector
int tich(vector<int> a, vector<int> b)
{
    int result = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        result = result + (a[i] * b[i]);
    }
    return result;
}

// tich 2 phan so
pair<int, int> tich(pair<int, int> a, pair<int, int> b)
{
    int tuso = a.first * b.first;
    int mauso = a.second * b.second;

    vector<int> uoctu = findUocSo(tuso);
    vector<int> uocmau = findUocSo(mauso);
    int gcd = uocchung(uoctu, uocmau);
    tuso = tuso / gcd;
    mauso = mauso / gcd;

    return make_pair(tuso, mauso);
}

// main 2.11
void baitap2_11()
{
    cout << "2.11: " << endl
         << endl;
    cout << "'1': tim tich vo huong 2 vector\n";
    cout << "'2': tich 2 phan so\nchon yeu cau: ";
    int tmp;
    cin >> tmp;
    if (tmp == 1)
    {
        int n;
        cout << "nhap n: ";
        cin >> n;

        if (n >= 1 && n <= 10)
        {
            vector<int> a, b;
            cout << "nhap " << n << " so nguyen cho vector a: ";
            for (int i = 0; i < n; i++)
            {
                int temp;
                cin >> temp;
                a.push_back(temp);
            }
            cout << "nhap " << n << " so nguyen cho vector b: ";
            for (int i = 0; i < n; i++)
            {
                int temp;
                cin >> temp;
                b.push_back(temp);
            }
            cout << "tich vo huong cua 2 vector la: " << tich(a, b) << endl;
        }
    }
    else if (tmp == 2)
    {
        pair<int, int> A, B;

        cout << "nhap phan so a:\ntu so: ";
        cin >> A.first;
        cout << "mau so: ";
        cin >> A.second;

        cout << "nhap phan so b:\ntu so: ";
        cin >> B.first;
        cout << "mau so: ";
        cin >> B.second;

        auto [x, y] = tich(A, B);
        cout << "tich 2 phan so la: " << x << "/" << y << endl;
    }
    cout << "ket thuc chuong trinh!\n";
    cout << endl
         << "----------" << endl;
}

// 2.12

// cong 2 mang 1 chieu
vector<int> cong(vector<int> a, vector<int> b)
{
    vector<int> rs;
    int temp;
    for (int i = 0; i < a.size(); i++)
    {
        temp = a[i] + b[i];
        rs.push_back(temp);
    }
    return rs;
}

// cong 2 mang 2 chieu
vector<vector<int>> cong(vector<vector<int>> a, vector<vector<int>> b)
{
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> rs(n, vector<int>(m));
    int temp;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); ++j)
        {
            temp = a[i][j] + b[i][j];
            rs[i][j] = temp;
        }
    }
    return rs;
}

// main 2.12
void baitap2_12()
{
    cout << "2.12: " << endl
         << endl;
    cout << "'1': cong 2 mang 1 chieu" << endl;
    cout << "'2': cong 2 mang 2 chieu" << endl
         << "chon yeu cau: ";
    int tmp;
    cin >> tmp;
    if (tmp == 1)
    {
        vector<int> a, b;
        int n;
        int t;
        cout << "nhap n: ";
        cin >> n;
        cout << "nhap " << n << " phan tu mang a: ";
        for (int i = 0; i < n; ++i)
        {
            cin >> t;
            a.push_back(t);
        }
        cout << "nhap " << n << " phan tu mang b: ";
        for (int i = 0; i < n; ++i)
        {
            cin >> t;
            b.push_back(t);
        }

        vector<int> rs = cong(a, b);
        cout << "ket qua: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << rs[i];
            if (i != n - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else if (tmp == 2)
    {
        int n, m;
        int t;
        cout << "nhap do rong cot cua mang: ";
        cin >> n;
        cout << "nhap do rong hang cua mang: ";
        cin >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        cout << "nhap mang a:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "nhap " << m << " phan tu cot " << i + 1 << ": ";
            for (int j = 0; j < m; ++j)
            {
                cin >> t;
                a[i][j] = t;
            }
        }

        cout << "nhap mang b:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "nhap " << m << " phan tu cot " << i + 1 << ": ";
            for (int j = 0; j < m; ++j)
            {
                cin >> t;
                b[i][j] = t;
            }
        }

        vector<vector<int>> rs(n, vector<int>(m));
        rs = cong(a, b);
        cout << "ket qua: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << rs[i][j];
                if (j != m - 1)
                {
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
    cout << "ket thuc chuong trinh!\n";
    cout << endl
         << "----------" << endl;
}

// test
int main()
{
    baitap2_7();
    baitap2_8();
    baitap2_9();
    baitap2_10();
    baitap2_11();
    baitap2_12();
    return 0;
}