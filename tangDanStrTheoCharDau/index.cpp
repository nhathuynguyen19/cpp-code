#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string n;
    string t;
    vector<string> luuStr;
    
    #ifndef ONLINE_JUGDE
    freopen("t.inp", "r", stdin);
    #endif
    
    getline(cin, n);
    
    stringstream ss(n);
    
    while(ss >> t){
        luuStr.push_back(t);
    }
    
    for(int i = 0; i < 5; ++i){
        cout << luuStr[i] << endl;
    }
    
    
}