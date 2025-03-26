#include <iostream>
#include <string>

using namespace std;

struct date{
	int ngay;
	int thang;
	int nam;
};
struct sinhvien{

	int ma;
	string ht;
	date ns;
	double d;
};

// hàm tách tên
void tachTen(const string& hoTen, string& ten) {
    // vi tri dau cach cuoi
    size_t viTriCuoiCung = hoTen.rfind(' ');
    //tach ten
    ten = hoTen.substr(viTriCuoiCung + 1);
}
int main() {
	freopen("in.csv", "r", stdin);
    
    int n;
    string ten;
    
    cin >> n;
    cin.ignore();
    
    sinhvien ar[n];
    
    for(int i = 0; i < n; ++i){
    	//ma sv
    	cin >> ar[i].ma;
    	cin.ignore();
    	//ho ten
    	getline(cin, ar[i].ht);
    	
    	//nhap ngay sinh
    	cin >> ar[i].ns.ngay;
    	cin >> ar[i].ns.thang;
    	cin >> ar[i].ns.nam;
    	//diem
    	cin >> ar[i].d;
	}
	
	//liet ke sinh vien co diem lon hon hoac bang 5
	for(int i = 0; i < n; ++i){
		if(ar[i].d >= 5.0){
			cout <<ar[i].ma;
			cout << ", ";
			cout << ar[i].ht;
			cout << ", ";
			cout << ar[i].ns.ngay;
			cout << '/';
			cout << ar[i].ns.thang;
			cout << '/';
			cout << ar[i].ns.nam;
			cout << ", ";
			cout << ar[i].d;
			cout << endl;
		}
	}
	cout << "**********" << endl;
	//liet ke cac sinh vien co nam sinh la 2003
	for(int i = 0; i < n; ++i){
		if(ar[i].ns.nam == 2003){
			cout <<ar[i].ma;
			cout << ", ";
			cout << ar[i].ht;
			cout << ", ";
			cout << ar[i].ns.ngay;
			cout << '/';
			cout << ar[i].ns.thang;
			cout << '/';
			cout << ar[i].ns.nam;
			cout << ", ";
			cout << ar[i].d;
			cout << endl;
		}
	}
    cout << "**********" << endl;
    //liet ke cac sinh vien co ten la tuan
    string tuan = "Tuan";
    for(int i = 0; i < n; ++i){
    	tachTen(ar[i].ht, ten);
		if(ten == tuan){
			cout <<ar[i].ma;
			cout << ", ";
			cout << ar[i].ht;
			cout << ", ";
			cout << ar[i].ns.ngay;
			cout << '/';
			cout << ar[i].ns.thang;
			cout << '/';
			cout << ar[i].ns.nam;
			cout << ", ";
			cout << ar[i].d;
			cout << endl;
		}
	}
	
    return 0;
}
