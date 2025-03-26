#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int low = 0;
    int up = 0;
    int num = 0;
    int more = 0;
    int all = 0;
    
    #ifndef ONLINE_JUGDE
    freopen("test.inp", "r", stdin);
    #endif
    
    getline(cin, a);
    
    for(int i = 0; i < a.length(); ++i){
        if(isalpha(a[i])){
            if(islower(a[i])){
            ++low;
            }
            else if(isupper(a[i])){
            ++up;
            }
        }
        else if(a[i] >= '0' && a[i] <= '9'){
            ++num;
            all += (a[i] - 48); 
        }
        else if(a[i] != ' '){
            ++more;
        }
    }
    cout << up << endl << low << endl << num << endl << more << endl << all;
    
    
}