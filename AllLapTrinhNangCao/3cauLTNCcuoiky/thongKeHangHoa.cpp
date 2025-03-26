#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef string str;
typedef struct node{
    int id;
    int count;
    int price;
}Product;

//var
ll n;
ll sumLoaiHang = 0;
ll sumGiaTri = 0;
vector<node> products;

//func
void insL(vector<node> &products){
    node product;
    cin >> product.id;
    cin >> product.count;
    cin >> product.price;
    products.push_back(product);
}

void input(ll n, vector<node> &products){
    for(int i = 0; i < n; ++i){
        insL(products);
    }
}

void calSumLoaiHangAndSumGiaTri(node product, ll &sumLoaiHang, ll &sumGiaTri){
    sumLoaiHang = sumLoaiHang + product.count;
    sumGiaTri = sumGiaTri + (product.count * product.price);
}

bool dksort(const node a, const node b){
    if(a.price < b.price){
        return a.price > b.price;
    }
    else if(a.price == b.price){
        if(a.id > b.id){
            return a.id < b.id;
        }
    }
return 1;
}

void sapXep(vector<node> &products){
    sort(products.begin(), products.end(), dksort);
}

void action(ll &sumLoaiHang, ll &sumGiaTri, vector<node> &products){
    for(node product : products){
        calSumLoaiHangAndSumGiaTri(product, sumLoaiHang, sumGiaTri);
    }
    sapXep(products);
}

int main(){
    freopen("input.csv", "r", stdin);
    //input
    cin >> n;
    input(n, products);
    //action
    action(sumLoaiHang, sumGiaTri, products);
    ///output
    cout << sumLoaiHang << endl;
    cout << sumGiaTri << endl;
    for(node product : products){
        cout << product.id << " ";
    } cout << endl;
    return 0;
}