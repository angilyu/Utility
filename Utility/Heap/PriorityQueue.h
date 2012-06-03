#ifndef UTILITY_PRIORITYQUEUE_H
#define UTILITY_PRIORITYQUEUE_H
#include <functional>
typedef int ELEM;
class PriorityQueue {
    int size;
    ELEM* array;
    int currentTail;
    std::less<int> comp;
public:
    PriorityQueue(int queueSize);
    ~PriorityQueue() {
        delete []array;
    }
    bool Insert(ELEM elem);
    bool Remove();
    ELEM* Pick();
};
#endif
