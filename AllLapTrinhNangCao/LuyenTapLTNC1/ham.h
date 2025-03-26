#ifndef HAM_H
#define HAM_H
#include <iostream>
#include <string>
using namespace std;

//bai 1
void daoTuInChuoi(){
	cout << "bai 1:" << endl;
	string str1;
    getline(cin, str1);
	int lenstr1 = str1.length();
	int t = lenstr1 - 1;
	for(int i = t; i >= 0; --i){
		if(str1[i] == ' '){
			for (int j = i + 1; j <= t; ++j){
				cout << str1[j];
			}
			cout << ' ';
			t = i - 1;
		}
		if(i == 0){
			for (int j = i; j <= t; ++j){
				cout << str1[j];
			}
		}
	}
	cout << endl << endl;
}
//bai 2
void delWord(){
	cout << "bai 2:" << endl;
    string s2;
	string n = "to";
    getline(cin, s2);
    
    for(int i = 0; i < s2.length(); ++i){
        if(i == s2.find(n)){
			
            int pos = i + n.length() + 1;
            int l = s2.length() - (i + n.length() + 1);
			if(l <= 0) break;
            s2 = s2.substr(pos, l);
            i = 0;
        }
        cout << s2[i];
    }
	cout << endl << endl;
}
//bai 3
void countCharOccurrences(){
	cout << "bai 3:" << endl;
	string s3;
	char c = '\0';
	int t[1][128] = {{0}};
	getline(cin, s3);

	for(int i = 0; i < s3.length(); ++i){
		t[0][s3[i]]++;
	}
	for(int i = 0; i < 128; ++i){
		if(t[0][i] > 0){
			char C = c + i;
			cout << "'" << C << "'" << ": " << t[0][i] << endl;
		}
	}
	cout << endl;
}
//bai 4
void findMostFrequentChar(){
	cout << "bai 4:" << endl;
	string s4;
	char c4 = '\0';
	int t[1][128] = {{0}};
	int n = 0;
	bool dk4 = 0;
	getline(cin, s4);

	for(int i = 0; i < s4.length(); ++i){
		t[0][s4[i]]++;
	}
	for(int i = 0; i < 128; ++i){
		if(t[0][i] > n){
			n = t[0][i];
		}
	}
	cout << "ky tu xuat hien nhieu nhat la: ";
	for(int i = 0; i < 128; ++i){
		
		if(t[0][i] == n){
			char C4 = c4 + i;
			if(dk4 == 1){
				cout << ", '" << C4 << "'";
			}
			if(dk4 == 0){
				cout << "'" << C4 << "'";
				dk4 = 1;
			}
		}
	}
	cout << endl << endl;
}

//bai 5
void delPosToN(){
	cout << "bai 5:" << endl;
	string s5 = "dai hoc khoa hoc";
	int pos, n;

	cin >> pos >> n;

	for(int i = 0; i < s5.length(); ++i){
		if(i < pos || i > n){
			cout << s5[i];
		}
	}
	cout << endl << endl;
}
//bai 6
void splitPosToN(){
	cout << "bai 6:" << endl;
	string s6 = "dai hoc khoa hoc";
	int pos6, n6;

	cin >> pos6 >> n6;

	for(int i = 0; i < s6.length(); ++i){
		if(i >= pos6 && i <= n6){
			cout << s6[i];
		}
	}
	cout << endl << endl;
}
#endif
