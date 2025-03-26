#include <bits/stdc++.h>
using namespace std;

typedef struct abc{
    int day;
    int month;
    int year;
} date;
typedef struct xyz{
    int id;
    string lname; // Ho lot
    string fname; // Ten
    date birthday;
    double mark;
    xyz *next;
} student;

//sap xep
void sortHead(student *&head, int n){
	vector<string> name;
	student *t = head;
	for(int i = 0 ; i < n; ++i){
		name.push_back(t->fname);
		t = t->next;
	}
	sort(name.begin(), name.end());
	//thu
	for(int i = 0; i < n; ++i){
		cout << name[i] << " ";
	}
}

//in t mau tin sau khi sap xep
void printTStudent(){
	
}

//tim sainh vien theo ma so
void findStudentFollowId(){
	
}

//du lieu dau vao
void input(student *&head, int &n, int t){
	string ct;
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		//khoi tao node tam
		student *q = new(student);
		//nhap du lieu dau vao
		cin >> q->id;
		cin.ignore();
		getline(cin, q->lname);
		cin >> q->fname;
			//ngay thang nam sinh
			cin >> q->birthday.day;
			cin >> q->birthday.month;
			cin >> q->birthday.year;
		cin >> q->mark;
		q->next = NULL;
		
		//gan q vao list
		if(head == NULL){
			head = q;
		}
		else{
			student *t = head;
			while(t->next != NULL){
				t = t->next;
			}
			t->next = q;
		}
	}
	sortHead(head, n);
	cin >> t;
	printTStudent();
	while(cin >> ct){
		if(ct == "find"){
			findStudentFollowId();
		}
		if(ct == "End"){
			break;
		}
	}
}
//duyet head
void duyet(student *head){
	student *t = head;
	while(t != NULL){
		//duyet cac bo
		cout << t->id << ", ";
		cout << t->fname << ", ";
		cout << t->lname << ", ";
		cout << t->birthday.day << "/" << t->birthday.month << "/" << t->birthday.year << ", ";
		cout << t->mark << endl;
		t = t->next;
	}
}
int main(){
	freopen("in.csv", "r", stdin);
	int n;
	int t;
	student *head = NULL;
	
	input(head, n, t);
	sortHead(head, n);
	return 0;
}
