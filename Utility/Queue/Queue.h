#ifndef UTILITY_QUEUE_H
#define UTILITY_QUEUE_H

class Queue {
public:
    // VERY IMPORTANT
    virtual ~Queue() { }
    virtual bool isFull() const = 0;
    virtual bool isEmpty() const = 0;
    virtual bool enQueue(int elem) = 0;
    virtual int deQueue() = 0;
};

#endif
