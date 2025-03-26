#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct node{
    string name; //ten nguoi
    int mark; //diem tu 0 - 9;
    node *pre;
    node *next;
    node(): next(NULL), pre(NULL){}
}list;

void insertFirst(node *&head, node *&last, const string vname, int vmark){
    node *q = new node();
    q->mark = vmark;
    q->name = vname;

    if(head == NULL){
        head = q;
        last = q;
    }else{
        q->next = head;
        head->pre = q;
        head = q;
    }
}

void insertLast(node *&head, node *&last, const string vname, int vmark){
    node *q = new node();
    q->mark = vmark;
    q->name = vname;

    if(head == NULL){
        head = q;
        last = q;
    }else{
        last->next = q;
        q->pre = last;
        last = q;
    }
}

int count(node *head, int vmark){
    node *t = head;
    int count = 0;
    while(t != NULL){
        if(t->mark >= vmark) count++;
        t = t->next;
    }
    return count;
}

void input(node *&head, node *&last){
    string temp, vname;
    int vmark;
    while(cin >> temp){
        if(temp == "insF"){
            cin >> vname;
            cin >> vmark;
            cin.ignore();
            insertFirst(head, last, vname, vmark);
        }else if(temp == "insL"){
            cin >> vname;
            cin >> vmark;
            cin.ignore();
            insertLast(head, last, vname, vmark);
        }else if(temp == "count"){
            cin >> vmark;
            cin.ignore();
            cout << count(head, vmark) << endl;
        }else if(temp == "fin"){
            return;
        }
    }
}

int main(){
    //freopen("input.csv", "r", stdin);
    input(head, last);
    return 0;
}