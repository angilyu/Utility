#ifndef UTILITY_ARRAY_QUEUE_H
#define UTILITY_ARRAY_QUEUE_H

#include "Queue.h"
class ArrayQueue : public Queue {
    struct InvalidQueueOperation { };
    int size;
    int* array;
    int headIndex;
    int tailIndex;
    int count;
public:
    ArrayQueue(int queueSize);
    ~ArrayQueue() {
        delete []array;
    }

    bool isFull() const;
    bool isEmpty() const;
    bool enQueue(int elem);
    int deQueue();
    void printArray() const;
};

#endif
