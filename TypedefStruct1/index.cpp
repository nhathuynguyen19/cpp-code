#include <iostream>
#include <string>

using namespace std;

struct SinhVien {
    int maso;
    string hoten;
    double diem;
};

int main() {
	freopen("index.csv", "r", stdin);
    int n;
    //nhap so luong sinh vien (n < 50)
    cin >> n;
    cin.ignore();

    if (n <= 0 || n >= 50) {
        cout << "So luong sinh vien khong hop le." << endl;
        return 1;
    }

    SinhVien sv_arr[n];

    for (int i = 0; i < n; ++i) {
    	//nhap ma so sinh vien
        cin >> sv_arr[i].maso;
		cin.ignore();
		//nhap ho ten sinh vien
        getline(cin, sv_arr[i].hoten);
        //nhap diem sinh vien 
        cin >> sv_arr[i].diem;
    }

    cout << "\nDanh sach sinh vien diem lon hon 5:\n";
    for (int i = 0; i < n; ++i) {
        if(sv_arr[i].diem >= 5){
        	cout << "\nSinh vien " << i + 1 << ":\n";
	        cout << "Ma so: " << sv_arr[i].maso << endl;
	        cout << "Ho ten: " << sv_arr[i].hoten << endl;
	        cout << "Diem: " << sv_arr[i].diem << endl;
		}
    }

    return 0;
}
