#include <iostream>
#include <string>
#include <vector>
#include <stdbool.h>
using namespace std;

void mahoa(string &str, char c[], vector<string> cc){
	int n;
	int i;
	int ktl = 7;
	bool dk;
	i = 0;
	n = str.length();
	while(i < n){
		dk = 0;
		for(int j = 0; j < ktl; ++j){
			if(str[i] == c[j]){
				cout << cc[j];
				dk = 1;
				break;
			}
		}
		if(dk == 0){
			cout << str[i];
		}
		++i;
	}
}

int main(){
	freopen("mahoaurl.csv","r", stdin);
	//var
	int T;
	int i;
	char ktMaHoa[7] =
	{' ','!','$','%','(',')','*'};
	vector<string> ktchuyen;
	//ma chuyen
	ktchuyen.push_back("%20");
	ktchuyen.push_back("%21");
	ktchuyen.push_back("%24");
	ktchuyen.push_back("%25");
	ktchuyen.push_back("%28");
	ktchuyen.push_back("%29");
	ktchuyen.push_back("%2a");
	//
	string inputStr;
	//var
	cin >> T;
	cin.ignore();
	i = 1;
	while(i <= T){
		getline(cin, inputStr);
		cout << "Case #" << i << ": ";
		mahoa(inputStr, ktMaHoa, ktchuyen);
		if(i < T){
			cout << endl;
		}
		++i;
	}
	return 0;
}