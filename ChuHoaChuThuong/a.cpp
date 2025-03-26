#include <iostream>
#include <string>
using namespace std;

string st;
int low, up;
char T;

int main()
{
    #ifndef ONLINE_JUGDE
    freopen("in.inp", "r", stdin);
    #endif

    while(getline(cin, st)){
        low = 0, up = 0;
        for (long unsigned int i = 0; i < st.length(); i++){
            if (islower(st[i])){
                ++low;
            }
            if (isupper(st[i])){
                ++up;
            }
        }


        if(up > low){
            for (long unsigned int i = 0; i < st.length(); i++){
                if (islower(st[i])){
                    T = st[i] - 32;
                    cout << T;
                }
                else{
                    cout << st[i];
                }
            }   
            cout << endl;
        }
        else{
            for (long unsigned int i = 0; i < st.length(); i++){
                if (isupper(st[i])){
                    T = st[i] + 32;
                    cout << T;
                }
                else{
                    cout << st[i];
                }
            } 
            cout << endl;
        }
    }
    return 0;
}
