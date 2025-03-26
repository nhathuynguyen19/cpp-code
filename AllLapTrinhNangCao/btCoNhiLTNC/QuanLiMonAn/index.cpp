#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

int n = 5;
int i;

struct nhahang {
    string tm;
    float dg;
    string dvt;
};
bool checkDishName(nhahang thucdon[],string tenmon, int n){
    int i = 0;
    while(i < n){
        if(tenmon == thucdon[i].tm){
            return 1;
        }
        ++i;
    }
    return 0;
}
void nameHeadIsThit(string a){
	string b = "thit";
	string c = "Thit";
	int n = 4;
	int i = 0;
	bool dk1 = 1, dk2 = 1;
	while(i < n){
		if(a[i] != b[i]){
			dk1 = 0;
			break;
		}
		++i;
	}
	i = 0;
	while(i < n){
		if(a[i] != c[i]){
			dk2 = 0;
			break;
		}
		++i;
	}
	if(dk1 || dk2){
		cout << a << endl;
		cout << "---" << endl;
	}
}
void delDishDgIsZero(nhahang thucdon[], int n){
	int i = 0;
	char c = '\0';
	while(i < n){
		if(thucdon[i].dg == 0){
			thucdon[i].tm = c;
			thucdon[i].dvt = c;
		}
		++i;
	}
}
void clear() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    cout << "\x1B[2J\x1B[H";
}

int main(){
    freopen("input.csv", "r", stdin);
    nhahang thucdon[n];
    //a) nhap du lieu cho n mon 1 <= n <= 100 trong do ten mon khong trung nhau, yeu caiu nhap lai neu trung
    i = 0;
    while(i < n){
        do{
        	cout << "nhap ten mon:" << endl;
            getline(cin, thucdon[i].tm);
        }while(checkDishName(thucdon, thucdon[i].tm, i));
        cout << "nhap don gia:" << endl;
        cin >> thucdon[i].dg;
        cin.ignore();
        cout << "nhap don vi tinh:" << endl;
        getline(cin, thucdon[i].dvt);
        ++i;
    }
    clear();
    cout << "--------------------------------------------" << endl;
	//b) hien thi danh sach mon an vua nhap
	i = 0;
	cout << "- danh sach mon an vua nhap:" << endl;
	while(i < n){
		cout << "ten mon: " << thucdon[i].tm << endl;
		cout << "don gia: " << thucdon[i].dg << endl;
		cout << "don vi tinh: " << thucdon[i].dvt << endl;
		cout << "---" << endl;
		++i;
	}
	//c) tim kiem cac mon an co ten bat dau bang thit
	cout << "- cac mon an co ten bat dau bang thit:" << endl;
	i = 0;
	while(i < n){
		nameHeadIsThit(thucdon[i].tm);
		++i;
	}
	//d) chen mot mon an vao cuoi danh sach (dung mang dong)
	//e) xoa mon an co don gia bang 0
	delDishDgIsZero(thucdon, n);
}
