//cho một dãy số A với các phần tử a_i = i với i = 1 ... n. Hãy lập trình tính tổng các phần tử của dãy từ vị trí a_L đến vị trí a_R với L, R cho trước. Tuy nhiên để bài toán khó hơn một tí là trước khi tính tổng thì bản thân các số a_i sẽ biến đổi bằng cách lặp đi lặp lại quá trình tính tổng các chữ số của nó cho đến khi có một chữ số duy nhất, ví dụ: a_{13} = 13 = 1 + 3 = 4
#include <iostream>
using namespace std;

int Q;
int QDong = 0;
unsigned long long j=0;
unsigned long long tongday=0;

unsigned long long sumdayso(unsigned long long, unsigned long long);
unsigned long long sumchuso(unsigned long long);

int main(){
    //input
    cin >> Q;
    unsigned long long LAndR[Q][2];

    while(QDong<Q){
            cin >> LAndR[QDong][0]>>LAndR[QDong][1];
        QDong++;
    }
    //output
    QDong = 0;
    while(QDong<Q){
        cout << sumdayso(LAndR[QDong][0],LAndR[QDong][1]) << endl;
        QDong++;
    }
}
//hàm tính tổng dãy từ L đến R
unsigned long long sumdayso(unsigned long long L, unsigned long long R){
    unsigned long long khoang_cach_L_R = R-L+1;
    unsigned long long giua_L_va_R = R-((R-L+1)/2);
    for (unsigned long long i=L;i<=giua_L_va_R;i++){
        tongday = tongday + sumchuso(i) + sumchuso(R-j);
        j++;
    }
    if( khoang_cach_L_R % 2 != 0){
        tongday = tongday - sumchuso(giua_L_va_R);
    }
    return tongday;
}
//hàm tính nếu n nhỏ hơn 10 thì trả giá trị cho sumdayso không thì tham chiếu đến sumdanve10
unsigned long long sumchuso(unsigned long long n){
    while(n>=10){
        unsigned long long temp = n % 10;
        n /= 10;
        n = n + temp;
    }
  return n;
}