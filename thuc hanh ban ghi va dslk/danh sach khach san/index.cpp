#include <iostream>
#include <string>
#include <vector>
using namespace std;
//struct
struct khachsan {
    string name_hotel;
    string name_street;
    float khoang_cach;
    int gia;
};
//struct
//func

//func
int main(){
    //var
    int n;
    //var
    //program
    freopen("input.csv", "r", stdin);
    cin >> n;
    vector<khachsan> ks;
    khachsan t_str;
    for(int i = 0; i < n; ++i){
        getline(cin, t_str.name_hotel, '|');
        getline(cin, t_str.name_street, '|');
        cin >> t_str.khoang_cach;
        cin.ignore();
        cin >> t_str.gia;
        cin.ignore();
        ks.push_back(t_str);
        cout << ks[i].name_hotel << " ";
    }
    for(khachsan t: ks){
        cout << t.name_hotel << endl;
    }
    //program
}