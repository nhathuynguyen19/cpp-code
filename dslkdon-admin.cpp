#include <iostream>
using namespace std;

typedef struct Node{
	int num; //data field
	Node *next; //link field, named (link, next-previous)
}List;
void insF(int x, List *&F);
void insL(int x, List *&F);
void traveser(List *F);

int main(){
	List *First = NULL; //var pointer for managerment list(head, dau), length 4 byte saved in stack
	insF(6, First);
	insF(4, First);
	insF(7, First);
	insF(2, First);
	insF(3, First);
	insF(12, First);
	insL(21, First);
	traveser(First);
	return 0;
}
//insert first 
void insF(int x, List *&F){
	Node *q = new(Node);
	q->num = x; 
	q->next = NULL; 
	if(F == NULL){
		F = q;
	}
	else{
		q->next = F;
		F = q;
	}
}
//insert last
void insL(int x, List *&F){
	Node *q = new(Node);
	q->num = x; 
	q->next = NULL; 
	if(F == NULL){
		F = q;
	}
	else{
		List *L = F;
		while(L->next != NULL){ //stop when L->next = NULL
			L = L->next;
		}
		L->next = q;
	}
}
//traveser function
void traveser(List *F){
	Node *p = F;
	while(p != NULL){
		cout << p->num << " ";
		p = p->next;
	}
}

