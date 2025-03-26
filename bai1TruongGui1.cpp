#include <iostream>

using namespace std;

int * nhapNSoNguyen(int n, int * nSoNguyen){
    for(int i = 0; i < n; ++i){
        cin >> *(nSoNguyen + i);
    }
    return nSoNguyen;
}
int timPhanTuNhoNhat(int n, int * nSoNguyen){
    int temp = nSoNguyen[0];
    for(int i = 0; i < n; ++i){
        if(nSoNguyen[i] < temp){
            temp = nSoNguyen[i];
        }
    }
    return temp;
}

int main(){
    int n;
    cin >> n;
    int nSoNguyen[n];
    int *nSN;
    int phanTuNhoNhat;
    nSN = nhapNSoNguyen(n, nSoNguyen);
    phanTuNhoNhat = timPhanTuNhoNhat(n, nSoNguyen);
    cout << phanTuNhoNhat;
}