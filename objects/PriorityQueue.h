struct Node {
    public:
        Node* next;
        int key;    // this may have to change
};

class PriorityQueue {
    public:
        Node *head;
        PriorityQueue();
        void enqueue(int key);
        Node* dequeue();

};