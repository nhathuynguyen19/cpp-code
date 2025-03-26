#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PB push_back
#define BG begin()
#define E end()
#define IG ignore()
#define REP(i, n) for(int i = 0; i < n; i++)

typedef struct {
    int day;
    int month;
    int year;
} date;
typedef struct abc{
    int id;
    string lname; // Họ lót
    string fname; // Tên
    date birthday;
    double mark;
} student;
typedef vector<student> vs;
int n, t;
vs sinhvien;

//input
void input(vs &sinhvien, int n){
    REP(i, n){
        student sv;
        date ns;

        cin >> sv.id;
        cin.IG;
        getline(cin, sv.lname);
        cin >> sv.fname;
        cin >> ns.day;
        cin >> ns.month;
        cin >> ns.year;
        sv.birthday = ns;
        cin >> sv.mark;

        sinhvien.PB(sv);
    }
}

//duyet
void duyet(vs sinhvien, int n){
    int i = 0;
    for(student x:sinhvien){
        if(i == n) break;
        cout << x.id << ", ";
        cout << x.fname << ", ";
        cout << x.lname << ", ";
        cout << x.birthday.day << '/' << x.birthday.month << '/' << x.birthday.year << ", ";
        cout << x.mark << endl;
        ++i;
    }
    cout << "***" << endl;
}
bool boolSort(student a, student b){
    if(a.fname != b.fname){
        return a.fname < b.fname;
    }else{
        return a.lname < b.lname;
    }
}
void find(vs sinhvien, int id){
    for(student x: sinhvien){
        if(x.id == id){
            cout << x.id << ", ";
            cout << x.fname << ", ";
            cout << x.lname << ", ";
            cout << x.birthday.day << '/' << x.birthday.month << '/' << x.birthday.year << ", ";
            cout << x.mark << endl;
            return;
        }
    }
    cout << "Not Found!" << endl;
}
void command(vs sinhvien){
    string in;
    int id;
    while(cin >> in){
        if(in == "find"){
            cin >> id;
            cin.IG;
            find(sinhvien, id);
        }else if(in == "End"){
            return;
        }
    }
}
int main(){
    //freopen("input.csv", "r", stdin);
    cin >> n;
    input(sinhvien, n);
    sort(sinhvien.BG, sinhvien.E, boolSort);
    cin >> t;
    duyet(sinhvien, t);
    command(sinhvien);
    return 0;
}