#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int n;
    vector<string> inputSt;
    
    #ifndef ONLINE_JUDGE
    freopen("test.inp", "r", stdin);
    #endif

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; ++i){
        string stTemp;
        getline(cin, stTemp);

        stringstream ss(stTemp);
        string wordOfStTemp;

        while(ss >> wordOfStTemp){
            inputSt.push_back(wordOfStTemp);
        }

        if(inputSt[1] == "multi"){
            cout << inputSt[0] << " * " << inputSt[2] << endl;
        }
        else if(inputSt[1] == "div"){
            cout << inputSt[0] << " / " << inputSt[2] << endl;
        }
        else if(inputSt[1] == "sub"){
            cout << inputSt[0] << " - " << inputSt[2] << endl;
        }
        else if(inputSt[1] == "add"){
            cout << inputSt[0] << " + " << inputSt[2] << endl;
        }
        inputSt.clear();
    }
}