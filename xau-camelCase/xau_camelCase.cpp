#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int l;
    int c;

    #ifndef ONLINE_JUGDE
        freopen("test.inp","r",stdin);
    #endif

    while(getline(cin,s)){
        c = 1;
        l = s.length();
        for (int i = 0; i < l; ++i){
            if(isalpha(s[i]) && isupper(s[i])){
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}