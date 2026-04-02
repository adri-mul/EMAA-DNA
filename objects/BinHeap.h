#include <vector>

template <typename T> class BinHeap {
    public:
        std::vector<T> heap;
        bool isMinHeap;
        int currentSize;
        int maxCapacity;
        int parent(int index);
        int leftChild(int index);
        int rightChild(int index);
        void heapifyUp(int index);
        void heapifyDown(int index);
        T getMin();
        bool isEmpty();
        int size();
        void insert(T key);
        T extractMin();
        void remove(T key);
        void decreaseKey(int i, T newValue);

};

