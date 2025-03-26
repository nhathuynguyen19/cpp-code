#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node{
    int mahang ;
    int trongluong ; // tinh theo kg
    int dongia ;
    string tentraicay ; // Bo, Mit, Sau-Rieng
    node *pre;
    node *next;
    node(): pre(NULL), next(NULL){}
}dstc;
node *head = NULL;
node *last = NULL;
int mahang, trongluong, dongia;
string tentraicay;

void insertFirst(node *&head, node *&last, int mahang, int trongluong, int dongia, string tentraicay){
    node *q = new node();
    q->mahang = mahang;
    q->trongluong = trongluong;
    q->dongia = dongia;
    q->tentraicay = tentraicay;

    if(head == NULL){
        head = q;
        last = q;
    }else{
        q->next = head;
        head->pre = q;
        head = q;
    }
}

int sum(node *head, const string tentraicay){
    node *t = head;
    int sum = 0;
    while(t != NULL){
        if(t->tentraicay == tentraicay){
            sum += t->trongluong * t->dongia;
        }
        t = t->next;
    }
    return sum;
}


void input(node *&head, node *&last, int mahang, int trongluong, int dongia, string tentraicay){
    string temp;
    while(cin >> temp){
        if(temp == "Add"){
            cin >> mahang;
            cin >> trongluong;
            cin >> dongia;
            cin.ignore();
            cin >> tentraicay;
            insertFirst(head, last, mahang, trongluong, dongia, tentraicay);
        }else if(temp == "Sum"){
            cin >> tentraicay;
            cout << sum(head, tentraicay) << endl;
        }else if(temp == "Fin"){
            return;
        }
    }
}

int main(){
    //freopen("input.csv", "r", stdin);
    input(head, last, mahang, trongluong, dongia, tentraicay);
    return 0;
}