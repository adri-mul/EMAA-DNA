#include "PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
    head = new Node;
}

/**
 * Function to add a new node with a key to a queue
 * @param key an integer defining priority. Lower numbers indicate higher priority.
 * @returns void
 */
void PriorityQueue::enqueue(int key)
{
    Node *newNode = new Node{nullptr, key};
    Node *pos = head;
    if (!head) {
        head = newNode;
        return;
    }
    if (head->key > key) {
        newNode->next = head;
        head = newNode;
        return;
    }
    while (pos->next) {
        if (pos->next->key > key) {
            newNode->next = pos->next;
            pos->next = newNode;
            return;
        }
        pos = pos->next;
    }
    // if reached end of queue
    pos->next = newNode;
}

/**
 * Function to remove front of queue
 * @returns Node*
 */
Node *PriorityQueue::dequeue()
{
    Node *pos = head;
    head = head->next;
    return pos;
}
