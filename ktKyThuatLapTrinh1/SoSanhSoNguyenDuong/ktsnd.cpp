#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	string b;
	
	#ifndef ONLINE_JUGDE
	freopen("test.inp", "r", stdin);
	#endif
	
	cin >> a;
	cin >> b;
	
	if(a.length() > b.length()) cout << "GREATER";
	else if(a.length() < b.length()) cout << "LESS";
	else if(a.length() == b.length()){
		for(long unsigned int i = 0; i < a.length(); ++i){
			if(a[i] > b[i]){
				cout << "GREATER";	
				break;
			} 
			else if(a[i] < b[i]){
				cout << "LESS";
				break;
			} 
			else if(i == a.length() - 1) cout << "EQUAL";
		}
	}
	
}


