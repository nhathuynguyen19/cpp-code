#include <bits/stdc++.h>
using namespace std;

#define PB push_back
#define BG begin()
#define E end()
#define IG ignore()
#define REP(n) for(int i = 0; i < n; ++i)
typedef long long ll;
typedef struct node{
    int number;
    node *pre;
    node *next;
    node(): pre(NULL), next(NULL){}
}Num;


//chen dau
void insertFirst(node *&head, node *&last, int number){
    node *q = new node();
    q->number = number;

    if(head == NULL){
        head = q;
        last = q;
    }else{
        q->next = head;
        head->pre = q;
        head = q;
    }
}
//chen cuoi
void insertLast(node *&head, node *&last, int number){
    node *q = new node();
    q->number = number;

    if(head == NULL){
        head = q;
        last = q;
    }else{
        last->next = q;
        q->pre = last;
        last = q;
    }
}


void duyet(node *head){
    node *t = head;
    while(t != NULL){
        cout << t->number << " ";
        t = t->next;
    }
    cout << endl;
}

//pt giua
void phanTuGiua(node *head, int n){
    node *t = head;
    REP((n - 1)/2){
        t = t->next;
    }
    cout << t->number << endl;
}

node *head = NULL;
node *last = NULL;
int n;
int number;
int main(){
    //freopen("input.csv", "r", stdin);
    cin >> n;
    while(cin >> number){
        if(number % 2 == 0){
            insertLast(head, last, number);
        }else if(number % 2 != 0){
            insertFirst(head, last, number);
        }
    }

    cout << head->number << endl;
    phanTuGiua(head, n);
    cout << last->number << endl;
    return 0;
}