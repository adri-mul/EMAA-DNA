#include <string>

struct Node {
    public:
        Node* next;
        std::string key;    // this may have to change
};

class List {
    public:
        Node *head;
        List();
        void insert(std::string key);
        bool remove(std::string key);
        Node* get(std::string key);
        void clear();
};