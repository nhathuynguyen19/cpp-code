#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// line space
inline void lineSpace()
{
    cout << "--------------------" << endl;
}

// error check
inline void error()
{
    cout << endl
         << "error" << endl;
}

// kiem tra nam nhuan
bool laNamNhuan(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            return 1;
        }
        else
        {
            if (year % 400 == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

// neu ngay ngoai 28, 29, 30, 31 hoac be hon bang 0
bool ngayNgoai28(int day)
{
    if (day < 1 || day > 28)
    {
        return 1;
    }
    return 0;
}
bool ngayNgoai29(int day)
{
    if (day < 1 || day > 29)
    {
        return 1;
    }
    return 0;
}
bool ngayNgoai30(int day)
{
    if (day < 1 || day > 30)
    {
        return 1;
    }
    return 0;
}
bool ngayNgoai31(int day)
{
    if (day < 1 || day > 31)
    {
        return 1;
    }
    return 0;
}

// neu thang lon hon 12 hoac be hon bang 0
bool thangNgoai12(int month)
{
    if (month < 1 || month > 12)
    {
        return 1;
    }
    return 0;
}

// thang chan thang le
bool chiaHetCho2(int month)
{
    if (month % 2 == 0)
    {
        return 1;
    }
    return 0;
}

// bang 2
bool equal2(int month)
{
    if (month == 2)
    {
        return 1;
    }
    return 0;
}

// tong so ngay trong thang
int soNgayTrongThang(int month, int year)
{
    if (laNamNhuan(year))
    {
        // truong hop nam nhuan
        if (equal2(month))
        {
            return 29;
        }
        else if (chiaHetCho2(month))
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }
    else
    {
        // truong hop nam khong nhuan
        if (equal2(month))
        {
            return 28;
        }
        else if (chiaHetCho2(month))
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }
}

// so sanh 2 doi tuong date
int aBeHonb(int daya, int montha, int yeara, int dayb, int monthb, int yearb)
{
    if (yeara < yearb)
    {
        return 1;
    }
    else if (yeara > yearb)
    {
        return 0;
    }
    else
    {
        if (montha < monthb)
        {
            return 1;
        }
        else if (montha > monthb)
        {
            return 0;
        }
        else
        {
            if (daya < dayb)
            {
                return 1;
            }
            else if (daya > dayb)
            {
                return 0;
            }
            else
            {
                return 2;
            }
        }
    }
}

// date class
class Date
{
private:
    int day;
    int month;
    int year;

public:
    // private keys
    int &Day()
    {
        return day;
    }
    int &Month()
    {
        return month;
    }
    int &Year()
    {
        return year;
    }

    // private keys no change
    int DayTemp()
    {
        return day;
    }
    int MonthTemp()
    {
        return month;
    }
    int YearTemp()
    {
        return year;
    }

    // ham nhap
    void nhap()
    {
        // dat bien dem lan lap
        int dem = 0;

        for (int i = 0; i < 1; --i)
        {
            // cout nhap lai
            if (dem > 0)
            {
                    cout << "nhap lai:" << endl;
            }

            // dem so lan lap
            dem++;

            // nhap lieu
            cout << setw(20) << "ngay: ";
            cin >> Day();
            cout << setw(20) << "thang: ";
            cin >> Month();
            cout << setw(20) << "nam: ";
            cin >> Year();

            // kiem tra thang
            if (thangNgoai12(Month()))
            {
                continue;
            }

            // nam nhuan va khong nhuan
            if (laNamNhuan(Year()))
            {
                // truong hop nam nhuan
                if (equal2(Month()))
                {
                    if (ngayNgoai29(Day()))
                    {
                        continue;
                    }
                }
                else if (chiaHetCho2(Month()))
                {
                    if (ngayNgoai30(Day()))
                    {
                        continue;
                    }
                }
                else
                {
                    if (ngayNgoai31(Day()))
                    {
                        continue;
                    }
                }
            }
            else
            {
                // truong hop nam khong nhuan
                if (equal2(Month()))
                {
                    if (ngayNgoai28(Day()))
                    {
                        continue;
                    }
                }
                else if (chiaHetCho2(Month()))
                {
                    if (ngayNgoai30(Day()))
                    {
                        continue;
                    }
                }
                else
                {
                    if (ngayNgoai31(Day()))
                    {
                        continue;
                    }
                }
            }
            break;
        }
    }

    // tang len 1 ngay
    void tang1Ngay()
    {
        int dayInMonth = soNgayTrongThang(Month(), Year());

        if (Day() < dayInMonth)
        {
            Day()++;
        }
        else
        {
            Day() = 1;

            if (Month() < 12)
            {
                Month()++;
            }
            else
            {
                Month() = 1;
                Year()++;
            }
        }
    }
    
    // tang len k ngay
    void tangkNgay(int k)
    {
        while (k > 0)
        {
            int dayInMonth = soNgayTrongThang(Month(), Year());

            if (Day() < dayInMonth)
            {
                Day()++;
                k--;
            }
            else
            {
                Day() = 1;
                k--;

                if (Month() < 12)
                {
                    Month()++;
                }
                else
                {
                    Month() = 1;
                    Year()++;
                }
            }
        }
    }

    // khoang cach giua 2 doi tuong
    int distance2(Date b)
    {
        int distance = 0;
        if (aBeHonb(Day(), Month(), Year(), b.Day(), b.Month(), b.Year()) == 1)
        {
            Date temp;
            temp.Day() = DayTemp();
            temp.Month() = MonthTemp();
            temp.Year() = YearTemp();

            for (int i = 0; i < 1; --i)
            {
                temp.tang1Ngay();
                distance++;
                if (aBeHonb(temp.Day(), temp.Month(), temp.Year(), b.Day(), b.Month(), b.Year()) == 2)
                {
                    break;
                }
            }
        }
        else if (aBeHonb(Day(), Month(), Year(), b.Day(), b.Month(), b.Year()) == 0)
        {
            Date temp;
            temp.Day() = b.DayTemp();
            temp.Month() = b.MonthTemp();
            temp.Year() = b.YearTemp();

            for (int i = 0; i < 1; --i)
            {
                temp.tang1Ngay();
                distance++;
                if (aBeHonb(temp.Day(), temp.Month(), temp.Year(), b.Day(), b.Month(), b.Year()) == 2)
                {
                    break;
                }
            }
        }
        else
        {
            return 0;
        }
        return distance;
    }

    // ham xuat
    void xuat(bool useEndl)
    {
        if (Day() < 10)
        {
            cout << "0" << Day();
        }
        else
        {
            cout << Day();
        }

        cout << "/";

        if (Month() < 10)
        {
            cout << "0" << Month();
        }
        else
        {
            cout << Month();
        }

        cout << "/";

        if (Year() < 10)
        {
            cout << "000" << Year();
        }
        else if (Year() >= 10 && Year() < 100)
        {
            cout << "00" << Year();
        }
        else if (Year() >= 100 && Year() < 1000)
        {
            cout << "0" << Year();
        }
        else
        {
            cout << Year();
        }
        if (useEndl)
        {
            cout << endl;
        }
    }
};

int main()
{
    Date a, b;
    int k;
    
    lineSpace();
    cout << "nhap ngay a: " << endl;
    a.nhap();
    lineSpace();
    cout << "nhap ngay b: " << endl;
    b.nhap();

    a.xuat(0);
    a.tang1Ngay();
    cout << " sau khi tang 1 ngay la: ";
    a.xuat(1);

    cout << "nhap k: ";
    cin >> k;
    a.xuat(0);
    a.tangkNgay(k);
    cout << " sau khi tang " << k << " ngay la: ";
    a.xuat(1);

    cout << "khoang cach giua ";
    a.xuat(0);
    cout << " va ";
    b.xuat(0);
    cout << " la: " << a.distance2(b) << " ngay";

    return 0;
}