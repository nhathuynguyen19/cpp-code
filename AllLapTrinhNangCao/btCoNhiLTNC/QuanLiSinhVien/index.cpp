#include <iostream>
#include <stdbool.h>
using namespace std;

int n = 3;
int i;
struct sinhvien{
	string msv;
	string ht;
	float dtb;
};
void clear() {
    cout << "\x1B[2J\x1B[H";
}
bool checkmsv(sinhvien * k47[],string msv, int n){
    int i = 0;
    while(i < n){
        if(msv == k47[i]->msv){
            return 1;
        }
        ++i;
    }
    return 0;
}
void nhap(sinhvien * k47[], int n){
	int i = 0;
	while(i < n){
    	do{
    		cout << "nhap msv:" << endl;
    		getline(cin, k47[i]->msv);
		}while(checkmsv(k47, k47[i]->msv, i));
		cout << "ho va ten:" << endl;
		getline(cin, k47[i]->ht);
		cout << "diem trung binh:" << endl;
		cin >> k47[i]->dtb;
		cin.ignore();
    	++i;
	}
}
int main(){
	freopen("input.csv", "r", stdin);
    sinhvien * k47 = new sinhvien;
    //nhap thong tin sinh vien trong so ma sinh vien khong trung nhau
    nhap(k47, n);
	clear();
	//hien thi danh sach sinh vien vua nhap
	i = 0;
	cout << "danh sach sinh vien vua nhap: " << endl;
	while(i < n){
		cout << "ma sinh vien: ";
		cout << k47[i].msv << " - ";
		cout << "ho va ten: ";
		cout << k47[i].ht << " - ";
		cout << "diem trung binh: ";
		cout << endl;
		++i;
	}
}
