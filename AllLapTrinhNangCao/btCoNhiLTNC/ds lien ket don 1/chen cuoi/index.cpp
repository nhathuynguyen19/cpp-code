#include <iostream>
#include <string>
using namespace std;

struct node{
	int data;
	node *next;
};
//khoi tao danh sach
void taods(node*& head, int data){
	node* temp;
	while(1){
		cin >> data;
		if(data > 0){
			node *q = new node;
			q->data = data;
			q->next = NULL;
			if(head == NULL){
				head = q;
			}
			else{
				temp = head;
				while(temp->next != NULL){
					temp = temp->next;
				}
				temp->next = q;
			}
		}
		else break;
	}
}
//chen du lieu vao sau phan tu be hon va truoc pha tu lon hon
void chen(int data, node* head){
	node *temp = head;
	while(temp->next != NULL){
		if(temp->data == data - 1){
			node *q = new node;
			q->data = data;
			q->next = temp->next;
			temp->next = q;
			break;
		}
		temp = temp->next;
	}
}
//duyet mang kiem tra
void duyetMang(node* head){
	node* temp = head;
	temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
//main
int main(){
	freopen("input.csv", "r", stdin);
	
	node* head = NULL;
	int data;
	//1
	taods(head, data);
	duyetMang(head);
	//2
	cin >> data;
	chen(data, head);
	duyetMang(head);
	cin >> data;
	chen(data, head);
	duyetMang(head);
	return 0;
}
