#include <iostream>
#include <string>
using namespace std;

struct sinhvien{
	string hoTen;
	float dtb;
};

float tinhTBC(int n, sinhvien * lop1){
	double sum = 0;
	double tb;
	int i;
	
	i = 0;
	while(i < n){
		sum = sum + lop1[i].dtb;
		++i;
	}
	tb = (double)sum / n;
	return tb;
}

float finddtbCaoNhat(int n, sinhvien * lop1){
	int i;
	float t = lop1[0].dtb;
	
	i = 0;
	while(i < n){
		if(t < lop1[i].dtb){
			t = lop1[i].dtb;
		}
		++i;
	}
	return t;
}

void tenHocSinhdtbCaoNhat(float t, sinhvien * lop1, int n){
	int i = 0;
	
	while(i < n){
		if(t == lop1[i].dtb){
			cout << lop1[i].hoTen << ": " << finddtbCaoNhat(n, lop1) << " diem" << endl;
		}
		++i;
	}
}
int main(){
	int n;
	int i;
	float tbc_lop1;
	float dtbCaoNhat;
	
	freopen("i.csv", "r",stdin);
	
	cin >> n;
	cin.ignore();
	sinhvien lop1[n];
	
	i = 0;
	while(i < n){
		getline(cin, lop1[i].hoTen);
		cin >> lop1[i].dtb;
		cin.ignore();
		++i;
	}
	
	tbc_lop1 = tinhTBC(n, lop1);
	dtbCaoNhat = finddtbCaoNhat(n, lop1);
	tenHocSinhdtbCaoNhat(finddtbCaoNhat(n, lop1), lop1, n);
	//cout << tbc_lop1;
	//cout << "ds hs co diem tb cao nhat lop: " << dtbCaoNhat;
}
