#include <iostream>
#include <string>
using namespace std;

int n = 2;
int i;
string id;

struct bookInfo {
	string id;
	string name;
	int quantity;
	long price;
};
//kiem tra ma sach ton tai
bool kiemtra(int n, bookInfo * book,string id){
	int j = 0;
	while(j < n){
		if(id == book[j].id){
			return 1;
		}
		++j;
	}
	return 0;
}
//nhap du lieu cho n cuon sach
void nhap(bookInfo * book){
	i = 0;
	while(i < n){
		do{
			cout << "nhap ma sach: ";
			getline(cin, book[i].id);
		}while(kiemtra(i, book, book[i].id));
		cout << "ten: ";
		getline(cin, book[i].name);
		cout << "so luong: ";
		cin >> book[i].quantity;
		cout << "don gia: ";
		cin >> book[i].price;
		cin.ignore();
		i++;
	}
}
//tinh tong tien tung sach
long tinhtong(long gia, int soluong){
	long sum = 0;
		sum = gia * soluong;
	return sum;
}
//void in tong gia tung sach
void tongtungsach(bookInfo * book){
	int i = 0;
	while(i < n){
		cout << book[i].name << ": " << tinhtong(book[i].price, book[i].quantity) << "VND" << endl;
		++i;
	}
}
//tinh tong tien tat ca cac sach
long tongall(bookInfo * book){
	long sum = 0;
	int i = 0;
	while(i < n){
		sum = sum + tinhtong(book[i].price, book[i].quantity);
		++i;
	}
	return sum;
}
//in ra tong tien tat ca cac sach
void intongtatcasach(bookInfo * book){
	cout << "tong gia tri tat ca sach la: " << tongall(book) << " VND";
	cout << endl;
}
//tim so luong sach lon nhat cua tung loai sach
int soluonglonnhat(bookInfo * book){
	int i = 0;
	int t = book[0].quantity;
	while(i < n){
		if(t < book[i].quantity){
			t = book[i].quantity;
		}
		++i;
	}
	return t;
}
//liet ke sach co so luong lon nhat va so luong
void lietkesachnhieunhat(bookInfo * book){
	int i = 0;
	while(i < n){
		if(book[i].quantity == soluonglonnhat(book)){
			cout << "sach sl lon nhat: " << '"' << book[i].name << '"' << " so luong la: " << book[i].quantity << endl;
		}
		++i;
	}
}

int main(){
	freopen("in.csv", "r", stdin);
	
	bookInfo book[n];
	
	nhap(book);
	cout << endl;
	
	tongtungsach(book);
	intongtatcasach(book);
	lietkesachnhieunhat(book);
	
	
	
}

/* tao struct
(ma sach, ten sach, so luong, don gia)
a. nhap du lieu cho n cuon sach trong do ma sach khong duoc trung nhau
b. tinh tong tien cho tung loai sach bang so luong * gia. in ra ten sach va tong tien tren 1 dong
c. tinh tong tien cua tat ca cac sach trong nha sach
d. liet ke ten sach co so luong lon nhat va so luong bang bao nhieu
e. in danh sach toan bo sach theo thu tu alphabet cua ma sach
f. xoa cac sach co don gia bang 0, ham tra ve so luong dau sach da bi xoa*/
