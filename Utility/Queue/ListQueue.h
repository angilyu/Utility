#ifndef UTILITY_LIST_QUEUE_H
#define UTILITY_LIST_QUEUE_H

#include "Queue.h"
class ListQueue : public Queue {
    struct InvalidQueueOperation { };
    std::list<int> queue;
public:
    ListQueue() { }
    ~ListQueue() { }

    bool isEmpty() const { return queue.empty(); }
    bool isFull() const { return false; }
    int deQueue();
    bool enQueue(int elem);
    void printQueue() const;
};

#endif
