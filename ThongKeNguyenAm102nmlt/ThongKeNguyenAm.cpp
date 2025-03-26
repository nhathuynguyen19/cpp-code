#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	string strNguyenAm = "aoyieuAOYIEU";
	
	#ifndef ONLINE_JUDGE
	freopen("testcase.inp", "r", stdin);
	#endif
	
	while (getline(cin, str)){
		int c = 0;
		for (unsigned int i = 0; i < str.length(); i++){
			for (unsigned int j = 0; j < strNguyenAm.length(); j++){
				if (str[i] == strNguyenAm[j]) c++;
			}
		}
		cout << c << endl;
	}
}
