#include <iostream>

using namespace std;

	int n;
	double sumGia = 0;
	int maHangInput = 0;
	int i;
	bool hangtontai;
//kieu du lieu mat hang
struct mathang {
		int MaHang;
		string Ten;
		double Gia;
	};
//kiem tra ma hang co ton tai trong danh sach mat hang khong
bool kiemTraMaHang(int maHangInput, mathang *ar_mh, int n){
	int i = 0;
	while(i < n){
		if(maHangInput == ar_mh[i].MaHang){
			return 1;
		}
		++i;
	}
	return 0;
}
//tinh tong gia cua cac mat hang
double tinhtong(int n, mathang *ar_mh){
	int i = 0;
	double sumGia;
	while(i < n){
		sumGia = sumGia + ar_mh[i].Gia;
		i++;
	}
	return sumGia;
}
//nhap mat hang
void nhapmathang(mathang * ar_mh){
	
	i = 0;
	while(i < n){
		do{
		cout << endl;
		cout << "nhap ma hang: ";
		cin >> ar_mh[i].MaHang;
		cin.ignore();
		}while(kiemTraMaHang(ar_mh[i].MaHang, ar_mh, i));
		cout << "nhap ten hang: ";
		getline(cin, ar_mh[i].Ten);
		cout << "nhap gia hang: ";
		cin >> ar_mh[i].Gia;
		++i;
	}
}
//ham test
void test(){
	i = 0;
	cout << endl;
	cout << "danh sach mat hang:" << endl;
	while(i < n){
		cout << "Ma Hang: " << ar_mh[i].MaHang << endl;
		cout << "Ten Hang: " << ar_mh[i].Ten << endl;
		cout << "Gia: " << ar_mh[i].Gia << endl;
		++i;
	}
	cout << endl;
	cout << "tong gia tri mat hang: " << sumGia << endl;
	cout << "ma hang so " << maHangInput;
	if(hangtontai){
		cout << " co ton tai";
	}
	else {
		cout << " khong ton tai";
	}
}

int main(){
	
	//freopen("in.csv", "r", stdin);
	
	cout << "nhap so luong mat hang: ";
	cin >> n;
	mathang ar_mh[n];
	//nhap mat hang
	nhapmathang(ar_mh);
	
	//tinh tong tien cua tat ca mat hang
	sumGia = tinhtong(n, ar_mh);
	
	//kiem tra ma hang co ton tai?
	hangtontai = kiemTraMaHang(maHangInput, ar_mh, n);
	
	//test
	test();
}
