#include "List.h"

List::List()
{
    head = new Node;
}

void List::insert(std::string key)
{
    Node *pos = head;
    Node *newNode = new Node{nullptr, key};
    if (!head->next) {
        head->next = newNode;
    }
    while (pos->next) {
        pos = pos->next;
    }
    pos->next = newNode;
}

bool List::remove(std::string key)
{
    Node *pos = head;
    
    while (pos->next) {
        if (pos->next->key.compare(key) == 0) {
            pos->next = pos->next->next;
            return true;
        }
    }
    if (pos->key.compare(key) == 0) {
        pos = nullptr;
        return true;
    }

    return false;
}

Node *List::get(std::string key)
{
    Node* pos = head;
    while (pos) {
        if (pos->key.compare(key) == 0) {
            return pos;
        }
    }

    return nullptr;
}

void List::clear()
{
    head = nullptr;
}
