#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else{
            int count;
            int temp = x;
            int x_rv = 0;
            for(int i = 1; i > -1; ++i){
                temp = temp / 10;
                if(temp != 0) continue;
                else {
                    count = i;
                    break;
                }
            }
            temp = x;
            int t;
            for(int i = count - 1; i >= 0; --i){
                t = temp % 10;
                x_rv = x_rv + t * (long long int)(pow(10, i));
                temp = temp / 10;
            }
            if(x == x_rv) return true;
            else return false;
        }
    }
};

int main(){

    return 0;
}