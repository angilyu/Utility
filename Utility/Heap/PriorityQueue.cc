#include "PriorityQueue.h"
#include "HeapAlgorithm.h"

PriorityQueue::PriorityQueue(int queueSize):
        size(queueSize), array(new ELEM[queueSize]), currentTail(-1) {
}

bool PriorityQueue::Insert(ELEM elem) {
    if (currentTail == size - 1)
        return false;
    currentTail++;
    array[currentTail] = elem;
    SiftUp(array, currentTail, comp);
    return true;
}
bool PriorityQueue::Remove() {
    if (currentTail == -1)
        return false;
    array[0] = array[currentTail];
    currentTail--;
    SiftDown(array, 0, currentTail, comp);
    return true;
}
ELEM* PriorityQueue::Pick() {
    if (currentTail == -1) {
        return NULL;
    }
    return array;
}



