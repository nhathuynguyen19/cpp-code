void insertFirst(Node *&head, Node *&tail, int data) {
    Node *q = new Node();
    q->data = data;

    if (head == NULL) {
        head = q;
        tail = q;
    } else {
        tail->next = q;
        q->prev = tail;
        tail = q;
    }
}