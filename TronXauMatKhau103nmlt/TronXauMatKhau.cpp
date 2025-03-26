#include <bits/stdc++.h>
using namespace std;

int main(){
	string O;
	string E;
	int temp;
	
	#ifndef ONLINE_JUDGE
		freopen("testcase.inp", "r", stdin);
	#endif
	
	cin >> O;
	cin >> E;
	int e = E.length();
	int o = O.length();
	int tempabs = abs(o - e);
	
	//cout << "chieu dai chuoi O: " << o << endl;
	//cout << "chieu dai chuoi E: " << e << endl;
	//cout << "tempabs: " << tempabs << endl;
	
	if ( tempabs != 0){
		if ((o - e) >= 1){
			for (int i = 0; i < e; ++i){
				cout << O[i] << E[i];
				temp = i;
			}
			cout << O.substr(temp + 1);
			//cout<< endl << "O dai hon";
		}
		else if ((o - e) <= -1){
			for (int i = 0; i < o; ++i){
				cout << O[i] << E[i];
				temp = i;
			}
			cout << E.substr(temp + 1);
			//cout << endl <<"O ngan hon";
		}
	}
	
	if (tempabs == 0){
		for (int i = 0; i < o; ++i){
			cout << O[i] << E[i];
		}
		//cout << endl <<"bang nhau";
	}
	
	return 0;
}
