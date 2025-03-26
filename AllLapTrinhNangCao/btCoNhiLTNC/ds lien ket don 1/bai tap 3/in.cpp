#include <iostream>
#include <string>
using namespace std;

struct songuyenduong{
	int num;
	songuyenduong *next;
};

int main(){
	songuyenduong *first = NULL;
	
	int tnum;
	
	while(1){
		cin >> tnum;
		if(tnum > 0){
			songuyenduong *q = new songuyenduong;
			q->num = tnum;
			q->next = first;
			first = q;
		}
		else break;
	}
	
	songuyenduong *p;
	for(p = first; p != NULL;p = p->next){
		cout << p->num << endl;
	}
}
