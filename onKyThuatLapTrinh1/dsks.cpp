#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define BG begin()
#define E end()
#define IG ignore()
#define REP(n) for(int i = 0, i < n; ++i)
//////////////////////////////////////////

typedef struct node{
    string name; //ten khach san
    string street; //ten duong
    int khoangcach;
    int dongia;
}Hotel;

int n;
typedef vector<Hotel> vh;
vh hotel;

//input
void input(vh &hotel, int n){
    node ht;
    string name;
    while(getline(cin, name, '|')){
        node t;
        t.name = name;
        getline(cin, t.street, '|');
        cin >> t.khoangcach;
        char c;
        cin >> c;
        cin >> t.dongia;
        cin.IG;

        hotel.PB(t);
    }
}

//duyet
void duyet(vh hotel){
    for(node x : hotel){
        cout << x.name << " , ";
        cout << x.street << " , ";
        cout << x.khoangcach << " , ";
        cout << x.dongia << endl;
    }
}
//phong duoi 300
void duoi300(vh hotel){
    for(node x : hotel){
        if(x.dongia <= 300){
            cout << x.name << " , ";
            cout << x.street << " , ";
            cout << x.khoangcach << ", ";
            cout << x.dongia << endl;
        }
    }
}
void kc3(vh hotel){
    for(node x : hotel){
        if(x.khoangcach <= 3){
            cout << x.name << " , ";
            cout << x.street << " , ";
            cout << x.khoangcach << ", ";
            cout << x.dongia << endl;
        }
    }
}
int main(){
    //freopen ("input.csv", "r", stdin);
    cin >> n;
    cin.IG;
    input(hotel, n);
    duoi300(hotel);
    cout << "***" << endl;
    kc3(hotel);
    return 0;
}