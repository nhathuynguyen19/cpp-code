#include <iostream>
#include <string>
using namespace std;

struct node{
	string ten;
	node *next;
};

int main(){
	//tao bien heo
	node *q = new node;
	q->ten = "thit ga";
	
	//tao bien bo
	node *t = new node;
	t->ten = "tom";
	
	//dia chi bien dau
	node *first = q;
	//---ds lien ket don
	q->next = t;
	t->next = '\0';
	//---ds lien ket don
	
	node *p;
	for(p = first; p != '\0'; p = p -> next){
		cout << p->ten << endl;
	}
	cout << "---" << endl;

	
	//tao bien thit heo
	node *a = new node;
	a->ten = "thit heo";
	
	//-noi a vao dau ds lk don
	a->next = first;
	first = a;
	
	//duyet
	for(p = first; p != '\0'; p = p -> next){
		cout << p->ten << endl;
	}
		cout << "---" << endl;

}
