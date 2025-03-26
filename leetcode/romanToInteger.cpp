#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ar[s.length()];
        int sum = 0;
        if(s.length() > 1){
            for(int i = 0; i < s.length(); ++i){
                if(s[i] == 'I') ar[i] = 1;
                else if(s[i] == 'V') ar[i] = 5;
                else if(s[i] == 'X') ar[i] = 10;
                else if(s[i] == 'L') ar[i] = 50;
                else if(s[i] == 'C') ar[i] = 100;
                else if(s[i] == 'D') ar[i] = 500;
                else if(s[i] == 'M') ar[i] = 1000;
            }
            for(int i = 1; i < s.length(); ++i){
                if(ar[i] > ar[i - 1]){
                    sum = sum + (ar[i] - ar[i - 1]);
                    i++;
                }
                else {
                    sum = sum + ar[i - 1];
                }
                if(i == s.length() - 1){
                    sum = sum + ar[i];
                }
            }
        }
        else {
            int i = 0;
            if(s[i] == 'I') ar[i] = 1;
            else if(s[i] == 'V') ar[i] = 5;
            else if(s[i] == 'X') ar[i] = 10;
            else if(s[i] == 'L') ar[i] = 50;
            else if(s[i] == 'C') ar[i] = 100;
            else if(s[i] == 'D') ar[i] = 500;
            else if(s[i] == 'M') ar[i] = 1000;
            sum = sum + ar[0];
        }
        return sum;
    }
};

int main(){
    Solution sol;
    cout << sol.romanToInt("M");
    return 0;
}