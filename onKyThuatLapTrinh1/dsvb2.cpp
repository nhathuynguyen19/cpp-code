#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct {
    int day;
    int month;
    int year;
} date;
typedef struct abc{
    int id;
    string name;
    date birthday;
    double mark;
} student;
int n;
vector<student> sinhvien;

//
void input(vector<student> &sinhvien, int n){
    for(int i = 0; i < n; ++i){
        student sv;
        date ns;

        cin >> sv.id;
        cin.ignore();
        getline(cin, sv.name);
        cin >> ns.day;
        cin >> ns.month;
        cin >> ns.year;
        cin >> sv.mark;
        sv.birthday = ns;

        sinhvien.push_back(sv);
    }
}

//
void lonHonBang5(vector<student> sinhvien, int n){
    for(student x : sinhvien){
        if(x.mark >= 5){
            cout << x.id << ", ";
            cout << x.name << ", ";
            cout << x.birthday.day << '/' << x.birthday.month << '/' << x.birthday.year << ", ";
            cout << x.mark << endl;
        }
    }
    cout << "**********" << endl;
}

void nam2003(vector<student> sinhvien, int n){
    for(student x : sinhvien){
        if(x.birthday.year == 2003){
            cout << x.id << ", ";
            cout << x.name << ", ";
            cout << x.birthday.day << '/' << x.birthday.month << '/' << x.birthday.year << ", ";
            cout << x.mark << endl;
        }
    }
    cout << "**********" << endl;
}

void svTuan(vector<student> sinhvien, int n){
    for(student x : sinhvien){
        stringstream s(x.name);
        string fname;
        while(s >> fname){

        }
        if(fname == "Tuan"){
            cout << x.id << ", ";
            cout << x.name << ", ";
            cout << x.birthday.day << '/' << x.birthday.month << '/' << x.birthday.year << ", ";
            cout << x.mark << endl;
        }
    }
}

int main(){
    //freopen("input.csv", "r", stdin);
    cin >> n;
    input(sinhvien, n);
    lonHonBang5(sinhvien, n);
    nam2003(sinhvien, n);
    svTuan(sinhvien, n);
    return 0;
}