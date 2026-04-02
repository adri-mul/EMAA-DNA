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
    
}
