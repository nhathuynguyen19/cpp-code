#include <iostream>
#include <string>
using namespace std;

typedef struct node {
    string name;    //la xau ky tu khong co ky tu trang ten nguoi
    int mark;       //la diem so co gia tri tu 0 - 9
    node *next;
}list;
-
//chen dau
void insF(string name, int mark, list *&head){
	list *q = new(node);
	q->name = name;
	q->mark = mark;
	q->next = NULL;
	if(head == NULL){
		head = q;
	}
	else{
		q->next = head;
		head = q;
	}
}
//chen cuoi
void insL(string name, int mark, list *&head){
	list *q = new(node);
	q->name = name;
	q->mark = mark;
	q->next = NULL; 
	if(head == NULL){
		head = q;
	}
	else{
		list *L = head;
		while(L->next != NULL){ //stop when L->next = NULL
			L = L->next;
		}
		L->next = q;
	}
}
//dem diem lon hon gia tri nhap vao
void count(list *head, int mark){
	int dem = 0;
	list *p = head;
	while(p != NULL){
		if(p->mark >= mark){
			dem++;
		}
		p = p->next;
	}
	cout << dem << endl;
}
//nhap
void input(string s, string name, int mark, list *&head){
	while(1){
		cin >> s;
		if(s == "insF"){
			cin >> name;
			cin >> mark;
			cin.ignore();
			insF(name, mark, head);
			//cout << "f";
		}
		else if(s == "insL"){
			cin >> name;
			cin >> mark;
			cin.ignore();
			insL(name, mark, head);
			//cout << "l";
		}
		else if(s == "count"){
			cin >> mark;
			cin.ignore();
			count(head, mark);
			//cout << "d";
		}
		else if(s == "fin"){
			//cout << "e";
			break;
		}
	}
}



int main(){
	list * head = NULL;
	string str, name;
	int mark;
	input(str, name, mark, head);
}


