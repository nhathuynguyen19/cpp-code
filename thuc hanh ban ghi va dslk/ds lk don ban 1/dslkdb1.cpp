#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

struct node{
    string name;
    int mark;
    node *next;
};

void insertFirst(node*& head, string name, int mark){
    node *q = new node;
    q->name = name;
    q->mark = mark;
    q->next = head;
    head = q;
}
void insertLast(node*& head, string name, int mark){
    node *q = new node;
    q->name = name;
    q->mark = mark;
    q->next = NULL;
    node *tempHead = head;
    if(head == NULL){
        head = q;
        q->next = NULL;
    }
    else{
        while(tempHead->next != NULL){
            tempHead = tempHead->next;
        }
        tempHead->next = q;
    }
}
void Count(node*& head, int mark){
    node *tempHead = head;
    int dem = 0;
    while(tempHead != NULL){
        if(tempHead->mark >= mark){
            ++dem;
        }
        tempHead = tempHead->next;
    }
    cout << dem << endl;
}
void deleteList(node*& head) {
    while (head != nullptr) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main(){

    freopen("input.csv", "r", stdin);

    string in;
    string word;
    node* head = NULL;
    vector<string> words;

    while (1){
        getline(cin, in);
        if (in != "fin"){
            stringstream ss(in);
            while (getline(ss, word, ' ')){
                words.push_back(word);
            }
            if(words[0] == "insF"){
                insertFirst(head, words[1], stoi(words[2]));
            }
            else if(words[0] == "insL"){
                insertLast(head, words[1], stoi(words[2]));
            }
            else if(words[0] == "count"){
                Count(head, stoi(words[1]));
            }
        }
        else if (in == "fin"){
            break;
        }
        words.clear();
    }
    deleteList(head);
    return 0;
}