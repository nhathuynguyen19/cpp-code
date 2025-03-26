#include <iostream>
#include <string>
using namespace std;

struct node{
    int data;
    node *next;
};
//chen n so nguyen vao danh sach
void chencuoi(int n, node*& head){
	int a;
	int i = 0;
	while(i < n){
		cin >> a;
		node *q = new node;
		q->data = a;
		q->next = NULL;
		if(head == NULL){
			head = q;
		}
		else{
			node *temp = head;
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = q;
		}
		++i;
	}
}
//duyet
void duyet(node* head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
}
//chen truoc p
void chentruocp(node*& head, int x, int p){
	int i = 0;
	node* temp = head;
	while(i < p){
		temp = temp->next;
		++i;
	}
	cout << temp->next->data;
}
//xoa p
void xoap(){

}
//tinh trung binh cong list
void avgList(){

}
int main(){
    freopen("input.csv","r", stdin);
	//var
	int n;
	node *head;
	char c;
	int x, p;
	//var
	cin >> n;
	chencuoi(n, head);
	
	while(1){
		cin >> c;
		if(c == 'i'){
			cin >> x >> p;
			chentruocp(head, x, p);
		}
		else if(c == 'd'){
			cin >> p;
			xoap();
		}
		else if(c == 'a'){
			 avgList();
		}
		else if(c == '0'){
			cin >> c;
			if(c == '0'){
				break;
			}
		}
	}

    return 0;
}
