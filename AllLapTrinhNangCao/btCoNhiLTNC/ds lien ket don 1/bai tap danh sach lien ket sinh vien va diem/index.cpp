#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

struct student{
	int student_id;
	string student_name;
	float student_mark_avg;
	student *next;
};
//nhap thong tin sinh vien
void nhap(student*& head){
	int tempId;
	while(1){
		cin >> tempId;
		cin.ignore();
		if(tempId != 0){
			student *q = new student;
			q->student_id = tempId;
			getline(cin, q->student_name);
			cin >> q->student_mark_avg;
			q->next = head;
			head = q;
		}
		else if(tempId == 0){
			break;
		}
	}
}
//in thong tin sinh vien
void duyet(student* head){
	student *tempNode = head;
	while(tempNode != NULL){
		cout << tempNode->student_id << ", ";
		cout << tempNode->student_name << ", ";
		cout << tempNode->student_mark_avg << endl;
		tempNode = tempNode->next;
	}
}
//kiem tra sinh vien co ton tai trong danh sach khong
void kiemTraName(string hoten, student* head){
	bool dk = 0;
	while(head->next != NULL){
		if(head->student_name == hoten){
			cout << "sinh vien " << hoten << " ton tai trong ds";
			dk = 1;
			break;
		}
		head = head->next;
	}
	if(dk == 0){
		cout << "sinh vien " << hoten << " khong ton tai trong ds";
	}
}
//sap xep
void sapxep(student*& head){
	for(Node *pTmp=list.pHead;pTmp!=NULL;pTmp=pTmp->pNext){
  		for(Node *pTmp2=pTmp->pNext;pTmp2!=NULL;pTmp2=pTmp2->pNext){
    		if(pTmp->data>pTmp2->data){
       			int tmp=pTmp->data;
       			pTmp->data=pTmp2->data;
       			pTmp2->data=tmp;
     		}
  		}
 	}
}
int main(){
	freopen("input.csv", "r", stdin);
	//var
	string hoten;
	//var
	student* head = NULL;
	//1
	nhap(head);
	//2
	duyet(head);
	//3
	getline(cin, hoten);
	kiemTraName(hoten, head);
	//4
	sapxep(head);
	return 0;
}
