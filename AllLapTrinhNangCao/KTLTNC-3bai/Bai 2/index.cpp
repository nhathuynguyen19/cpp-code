#include <iostream>
#include <string>
using namespace std;

int main(){
	/*phan khai bao bien*/
	string ht;
	char low;
	/*phan khai bao bien*/
	
	#ifndef ONLINE_JUGDE
	freopen("test.inp", "r", stdin);
	#endif
	
	/*chuong trinh*/
	getline(cin, ht);
	for(int i = 0; i < ht.length(); ++i){
		if(ht[i] != ' '){
			low = tolower(ht[i]);
			cout << low;
		}
	}
	cout << "@husc.edu.vn";
	/*chuong trinh*/
}
