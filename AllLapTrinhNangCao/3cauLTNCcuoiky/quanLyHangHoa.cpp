#include <iostream>
#include <string>
#include <sstream>
#include <stdbool.h>
using namespace std;
typedef long long ll;
typedef stringstream ss;
typedef struct node{
    int id;
    int count;
    int price;
    node *next;
    node(): next(NULL){}
}Product;

ll n;
node *head = NULL;

//word is add
bool isADD(string word){
    return word == "ADD";
}
//word is update
bool isUPDATE(string word){
    return word == "UPDATE";
}
//word is get count
bool isGET_COUNT(string word){
    return word == "GET_COUNT";
}
//word is GET_PRICE
bool isGET_PRICE(string word){
    return word == "GET_PRICE";
}


void insL(ss &wordOfStrLine, node *&head){
    node *q = new node();
    wordOfStrLine >> q->id;
    wordOfStrLine >> q->count;
    wordOfStrLine >> q->price;

    if(head == NULL){
        head = q;
        delete q;
    }
    else{
        node *t = head;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = q;
    }
}

void updateFollowId(ss &wordOfStrLine, node *&head){
    node *t = head;
    int id, count;
    wordOfStrLine >> id;
    wordOfStrLine >> count;

    while(t != NULL){
        if(id == t->id){
            t->count += count;
            break;
        }
        t = t->next;
    }
}
void findIdFirstHigherThanCount(ss &wordOfStrLine, node *&head){
    int count;
    wordOfStrLine >> count;
    node *t = head;
    while(t != NULL){
        if(t->count > count){
            cout << t->id << endl;
            return;
        }
        t = t->next;
    }
    cout << "None" << endl;
}

void findIdLastHigherThanPrice(ss &wordOfStrLine, node *&head){
    int id, price;
    bool dk = 0;
    wordOfStrLine >> price;
    node *t = head;

    while(t != NULL){
        if(t->price > price){
            id = t->id;
            dk = 1;
        }
        t = t->next;
    }

    if(dk){
        cout << id << endl;
    }
    else{
        cout << "None" << endl;
    }
}

//action
void action(ss &wordOfStrLine, node *&head){
    string word;
    wordOfStrLine >> word;
    if(isADD(word)) 
        insL(wordOfStrLine, head);
    else if(isUPDATE(word)) 
        updateFollowId(wordOfStrLine, head);
    else if(isGET_COUNT(word)) 
        findIdFirstHigherThanCount(wordOfStrLine, head);
    else if(isGET_PRICE(word))
        findIdLastHigherThanPrice(wordOfStrLine, head);
}


//input
void input(ll &n, node *&head){
    string strLine;

    cin >> n;
    cin.ignore();
    while(getline(cin, strLine)){
        ss wordOfStrLine(strLine);
        action(wordOfStrLine, head);
    }
}

int main(){
    freopen("input.csv", "r", stdin);
    input(n, head);

    return 0;
}