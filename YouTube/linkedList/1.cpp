struct node {
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
node *tail = NULL;


void insertFirst(node *&head, node *&tail, node *q){
    if(head == NULL){
        head = q;
        tail = q;
    }else{
        q->next = head;
        head->prev = q;
        head = q;
    }
}



void insertLast(node *&head, node *&tail, node *q){
    if(head == NULL){
        head = q;
        tail = q;
    }else{
        tail->next = q;
        q->prev = tail;
        tail = q;
    }
}