//nhap thong tin nhan vien bao gom ho ten, ngay thang nam sinh, he so luong. in ra ten nhan vien co he so luong cao nhat trong n nhan vien

#include <iostream>
#include <string>

using namespace std;

struct date{
	int day;
	int month;
	int year;
};

struct nhanvien {
	string ht;
	date ns;
	float hsl;
};

void hslCaoNhat(int n, nhanvien * nv){
	float temp = nv[0].hsl;
	int i = 0;
	int j;
	
	while(i < n){
		if(temp < nv[i].hsl){
			temp = nv[i].hsl;
			j = i;
		}
		++i;
	}
	
	cout << nv[j].ht;
}

int main(){
	freopen("in.csv", "r", stdin);
	
	int n;
	int i;
	
	cin >> n;
	cin.ignore();
	nhanvien nv[n];
	
	i = 0;
	while(i < n){
		getline(cin, nv[i].ht);
		
		cin >> nv[i].ns.day;
		cin >> nv[i].ns.month;
		cin >> nv[i].ns.year;
		
		cin >> nv[i].hsl;
		++i;
	}
	hslCaoNhat(n, nv);
	
	
}
