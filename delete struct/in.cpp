#include <iostream>
using namespace std;

typedef struct abc{
	int data;
	abc *next;
}intnum;
//input
void input(intnum * &head){
	int num;
	while(1){
		cin >> num;
		if(num > 0){
			intnum *p = new(intnum);
			p->data = num;
			p->next = NULL;
			if(head == NULL){
				head = p;
			}
			else{
				intnum *l = head;
				while(l->next != NULL){
					l = l->next;
				}
				l->next = p;
			}
		}
		else{
			break;
		}
	}
}
//traveser
void traveser(intnum *head){
	intnum *p = head;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
//tim so truoc
void find(intnum* head, int num){
	intnum *p = head;
	while(p->next != NULL){
		if(p->next->data == num){
			cout << p->data << " ";
		}
		p = p->next;
	}
}
//tim so truoc cach 2
void find2(intnum* head, int num){
	intnum *p = head;
	intnum *pre = NULL;
	while(p->next != NULL){
		if(p->data == num && pre != NULL){
			cout << pre->data << " ";
		}
		pre = p;
		p = p->next;
	}
	cout << endl;
}
//xoa tat ca nut chua gia tri do
void delX(intnum *&head, int x){
	intnum *p = head;
	intnum *pre = NULL;
	while(p != NULL){
		if(p->data == x){
			pre->next = p->next;
			delete p;
			p = pre->next;
		}
		else{
			pre = p;
			p = p->next;
		}
	}

}
int main(){
	int x;
	intnum *head = NULL;
	input(head);
	traveser(head);
	cin >> x;
	delX(head, x);
	traveser(head);
	
}
