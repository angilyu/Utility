#include <iostream>
#include <list>
#include "ListQueue.h"

using namespace std;

void ListQueue::printQueue() const {
    for (list<int>::const_iterator pos = queue.begin();
        pos != queue.end(); ++pos) {
        cout<<*pos<<"\t";
    }
    cout<<endl;
}
int ListQueue::deQueue() {
    if (isEmpty()) {
        throw InvalidQueueOperation();
    }
    int result = queue.front();
    queue.pop_front();
    return result;
}
bool ListQueue::enQueue(int elem) {
    queue.push_back(elem);
    return true;
}
