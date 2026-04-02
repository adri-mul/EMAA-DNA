#include <iostream>
#include "BinHeap.h"

template <typename T>
int BinHeap<T>::parent(int index)
{
    return (index - 1)/2;
}

template <typename T>
int BinHeap<T>::leftChild(int index)
{
    return 2 * index + 1;
}

template <typename T>
int BinHeap<T>::rightChild(int index)
{
    return 2 * index + 2;
}

template <typename T>
void BinHeap<T>::heapifyUp(int index)
{
    while (index < heap.size() 
           && heap[index] < heap[parent(index)])
    {
        swap(heap[index], heap[parent(index)]);
        // continue up the heap
        index = parent(index);
    }
}

template <typename T>
void BinHeap<T>::heapifyDown(int index)
{
    int smallest = index;
    int left = leftChild(index);
    int right = rightChild(index);

    if (left > -1 && left < heap.size() &&
        heap[left] < heap[right]) 
    {
        smallest = left;
    }

    if (right < heap.size() &&
        heap[right] < heap[left]) 
    {
        smallest = right;
    }

    // swap node with smallest node if smallest is not index
    if (smallest != index) 
    {
        std::swap(heap[index], heap[smallest]);
        heapifyDown(smallest); // continue until heap is restored
    }
}

template <typename T>
T BinHeap<T>::extractMin()
{
    if (isEmpty()) {
        return nullptr;
        std::cout << "Heap is empty" << std::endl;
    }

    T root = heap.front();
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
    return root;

}

template <typename T>
void BinHeap<T>::deleteNode(T key)
{
    int index = -1;
    // Find index
    for (int i = 0; i < heap.size(); i++) {
        if (heap[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        // replace the node with the last element in heap
        heap[index] = heap.back();
        heap.pop_back();
        // restore heap property
        heapifyDown(index);
    }
}

template <typename T>
void BinHeap<T>::decreaseKey(int index, T newValue) {
    if (i < 0 || i >= heap.size() || newValue > heap[index]) {
        std::cout << "invalid index" << std::endl;
    }
    heap[i] = newValue;
    heapifyUp(index);
}
