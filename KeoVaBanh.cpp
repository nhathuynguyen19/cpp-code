#include <iostream>
using namespace std;
void HamTra(long long, long long, long long);

int main()
{
    long long A, B, K;
    //input
    cin >> A >> B >> K;
    //output
    HamTra(A, B, K);
    return 0;
}

void HamTra(long long A, long long B, long long K){
    if(A > B){
        //
        if(A < K){
            K = K - A;
            A = 0;
            if(B < K) {
            K = K - B;
            B = 0;
            }
            else {
                B = B - K;
                K = 0;
            }
        }
        //
        else if(A == K){
            A = 0;
            K = 0;
        }
        //
        else if(A > K){
            A = A - K;
            K = 0;
        }
    }
    else if(A < B){
        //
        if(A < K){
            K = K - A;
            A = 0;
            if(B < K) {
            K = K - B;
            B = 0;
            }
            else {
                B = B - K;
                K = 0;
            }
        }
        //
        else if(A == K){
            A = 0;
            K = 0;
        }
        //
        else if(A > K){
            A = A - K;
            K = 0;
        }
    }
    else if(A == B){
        //
        if(A < K){
            K = K - A;
            A = 0;
            if(B < K) {
            K = K - B;
            B = 0;
            }
            else {
                B = B - K;
                K = 0;
            }
        }
        //
        else if(A == K){
            A = 0;
            K = 0;
        }
        //
        else if(A > K){
            A = A - K;
            K = 0;
        }
    }
    
    for (long long i = K; i > 0; i--){
        if (A >= 1) {
            --A;
        }
        else if (B >= 1) {
            --B;
        }
        else {
            break;
        }
    }
    cout << A << ' ' << B;
}

