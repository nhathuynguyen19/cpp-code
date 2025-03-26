#include <iostream>
using namespace std;

int main(){
    int f = 0;
    int f1 = 0;
    int f2 = 1;
    
    int i = 0;
    while(i > -1){
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        cout << f << ' ';
        if(f > 143){
            f1 = 0;
            f2 = 1;
            cout << endl;
        }
    }
}