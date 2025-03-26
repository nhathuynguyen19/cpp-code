#include <iostream>
#include <string>
using namespace std;

int main(){
	/*phan khai bao bien*/
	string ma;
	char kt;
	int dem = 0;
	/*phan khai bao bien*/
	
	#ifndef ONLINE_JUGDE
	freopen("test.inp", "r", stdin);
	#endif
	
	/*chuong trinh*/
	getline(cin, ma);
	cin >> kt;
	for(int i = 0; i < ma.length(); ++i){
		if(ma[i] == kt){
			++dem;
		}
	}
	cout << dem;
	/*chuong trinh*/
	return 0;
}
