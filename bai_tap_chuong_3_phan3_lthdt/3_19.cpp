#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include <conio.h>
typedef double db;
using namespace std;
bool isEscapePressed() // Kiểm tra phím ESC
{
    return _kbhit() && _getch() == 27;
}
void row1() // hang thong tin
{
    cout << setw(20) << "toa do x" << setw(20) << "toa do y" << setw(20) << "ban kinh r" << endl;
}
class Circle // lop hinh tron
{
private:
    db x, y; // toa do tam
    db r;    // ban kinh
public:
    Circle *next;                                                 // con tro next
    Circle(db x, db y, db r) : x(x), y(y), r(r), next(nullptr) {} // ham tao circle
    Circle() : x(0), y(0), r(0), next(nullptr) {}                 // ham tao 2
    db get_x();                                                   // lay toa do x
    db get_y();                                                   // lay toa do y
    void input();                                                 // ham nhap
    void output();                                                // ham xuat
    bool center_lies_on_the_x_axis();                             // tam nam tren truc hoanh?
};
class Management // lop quan ly
{
private:
    Circle *head; // con tro head
public:
    Management() : head(nullptr) {}                    // ham tao quan ly
    void insert_first(Circle *circle);                 // chen 1 hinh tron vao dau danh sach
    void display_circles_with_centers_on_the_x_axis(); // in ra nhung hinh tron co tam nam tren truc hoanh
    void input();                                      // ham nhap
};
db Circle::get_x() // lay toa do x
{
    return x;
}
db Circle::get_y() // lay toa do y
{
    return y;
}
void Circle::input() // ham nhap
{
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
    cout << "Nhap ban kinh: ";
    cin >> r;
}
void Circle::output() // ham xuat
{
    cout << setw(20) << x << setw(20) << y << setw(20) << r << endl;
}
bool Circle::center_lies_on_the_x_axis() // tam nam tren truc hoanh?
{
    return y == 0;
}
void Management::insert_first(Circle *circle) // chen 1 hinh tron vao dau danh sach
{
    circle->next = head;
    head = circle;
}
void Management::display_circles_with_centers_on_the_x_axis() // in ra nhung hinh tron co tam nam tren truc hoanh
{
    cout << endl;
    cout << "Nhung hinh tron co tam nam tren truc hoanh la:" << endl;
    row1();
    for (Circle *t = head; t != nullptr; t = t->next)
    {
        if (t->center_lies_on_the_x_axis())
        {
            t->output();
        }
    }
}
void Management::input() // ham nhap
{
    while (true)
    {
        int x, y, r;
        cout << endl;
        cout << "Nhap du lieu hinh tron: " << endl;
        cout << "Nhap toa do x: ";
        cin >> x;
        cout << "Nhap toa do y: ";
        cin >> y;
        cout << "Nhap ban kinh: ";
        cin >> r;
        Circle *circle = new Circle(x, y, r);
        insert_first(circle);
        cout << endl;
        cout << "Nhan esc de ket thuc! Nhan bat ky de tiep tuc" << endl;
        char ch;
        ch = _getch();
        if (ch == 27)
        {
            return;
        }
    }
}
int main()
{
    Management manage1 = Management();
    manage1.input();
    manage1.display_circles_with_centers_on_the_x_axis();
}