#include <iostream>
#include <string>
using namespace std;

struct sinhvien {
	string hten;
	float dtb;
};

int main(){
	sinhvien sv[5];
	int i;
	
	freopen("i.csv", "r", stdin);
	
	i = 0;
	while(i < 5){
		getline(cin, sv[i].hten);
		cin >> sv[i].dtb;
		cin.ignore();
		cout << "sinh vien " << i+1 << ':' << endl << "ho ten: " << sv[i].hten << endl << "diem tb: " << sv[i].dtb << endl << endl;
		++i;
	}
	return 0;
}
