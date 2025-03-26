#include <iostream>
#include <string>

typedef struct Node{
    int data;
    struct Node *next;
}SList;
//input

//insert last
void insL(SList *&head, int x){
	SList *q = new(SList);
	q->data = x; //gan x
	q->next = NULL; //dat next = NULL

	if(head == NULL){
		head = q;
	}
	else{
		SList *p = head;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = q;
	}
}
//insest truoc p
void insPreP(SList *&head, int x, int p){
	int i = 1;
	SList *t = head;
	SList *pre_t = NULL;
	while(t->next != NULL){
		if(i == p){
			SList *q = new(SList);
			q->data = p;
			q->next = t;
			t->next = q;
			break;
		}
		pre_t = t;
		t = t->next;
		++i;
	}
}

//delete p

//average cac phan tu trong danh sach

int main(){
	
	
	return 0;
}
