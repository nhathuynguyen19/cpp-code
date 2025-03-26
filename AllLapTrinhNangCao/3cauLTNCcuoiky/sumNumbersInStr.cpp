#include <iostream>
#include <string>
#include <stdbool.h>
#include <sstream>
using namespace std;
typedef string st;
typedef long long ll;

st S;
ll count = 0;
ll sum = 0;

//kiem tra co phai la so hay khong
bool isNumber(string word){
    ll lenWord = word.length();
    bool dk = 1;
    for(ll i = 0; i < lenWord; ++i){
        if(!isdigit(word[i])){
            dk = 0;
        }
    }
    if(dk) return 1;
    else return 0;
}

//neu la so thi thuc hien
void action(string word, ll &sum, ll &count){
    count++;
    ll number = stoi(word);
    sum = sum + number;
}

//duyet qua moi tu
void traverseWord(stringstream &ss, ll &count, ll &sum){
    string word;
    while(ss >> word){
        if(isNumber(word)){
            action(word, sum, count);
        } 
    }
}

int main(){
    freopen("input.csv", "r", stdin);
    //input
    getline(cin, S);
    stringstream ss(S);
    //action
    traverseWord(ss, count, sum);
    //output
    cout << count << endl << sum;
    return 0;
}