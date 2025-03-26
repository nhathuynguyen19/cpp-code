#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;



//struct
struct date{
    int day;
    int month;
    int year;
};
struct student{
    int id;
    string lname; // Ho lot
    string fname; // Ten
    date birthday;
    double mark;
};
//func
bool compareStudent(student a, student b) {
  if (a.fname != b.fname) {
    return a.fname < b.fname;
  } else {
    return a.lname < b.lname;
  }
}
int findma(const string &find){
	string tempstr;
	for(int i = find.length() - 1; i >= 0; --i){
		if(find[i] == ' '){
			t = i + 1;
		}
	}
	for(int i = t; i < find.length(); ++i){
		tempstr = find.substr(t, find.length() - 1);
	}
	return t = stoi(tempstr);
}
int main(){
	//var
	int n;
	int t;
	//input
	freopen("in.csv", "r", stdin);
	cin >> n;
	vector<student> Student;
	for(int i = 0; i < n; ++i){
		student tempstudent;
		cin >> tempstudent.id;
		cin.ignore();
		getline(cin, tempstudent.lname);
		cin >> tempstudent.fname;
		cin >> tempstudent.birthday.day;
		cin >> tempstudent.birthday.month;
		cin >> tempstudent.birthday.year;
		cin >> tempstudent.mark;
		Student.push_back(tempstudent);
	}
	cin >> t;
	cin.ignore();
	vector<string> find;
	string tempstr;

	do{
		getline(cin, tempstr);
		if(tempstr != "End"){
			find.push_back(tempstr);
		}
	}while(tempstr != "End");

	//chuong trinh
	sort(Student.begin(), Student.end(), compareStudent);
	for(int i = 0; i < t; ++i){
		cout << Student[i].id << ", ";
		cout << Student[i].fname << ", ";
		cout << Student[i].lname << ", ";
		cout << Student[i].birthday.day << "/";
		cout << Student[i].birthday.month << "/";
		cout << Student[i].birthday.year << ", ";
		cout << Student[i].mark << endl;
	}
	cout << "***" << endl;
	for(string a: find){
		int tempnum;
		tempnum = findma(a);
		int dem = -1;
		for(student sv: Student){
			dem++;
			if(tempnum == sv.id){
				cout << sv.id << ", ";
				cout << sv.fname << ", ";
				cout << sv.lname << ", ";
				cout << sv.birthday.day << "/";
				cout << sv.birthday.month << "/";
				cout << sv.birthday.year << ", ";
				cout << sv.mark << endl;
				break;
			}
			if(dem == n - 1){
				cout << "Not Found!" << endl;
				break;
			}
		}
	}
}
