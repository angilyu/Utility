#include <iostream>
#include <list>
#include <cassert>

#include "ArrayQueue.h"
#include "ListQueue.h"
using namespace std;

int main(int argc, char** argv) {
    ListQueue queue;
    assert(queue.isFull() == 0);
    queue.enQueue(8);
    queue.enQueue(8);
    queue.enQueue(7);

    assert(queue.deQueue() == 8);
    assert(queue.isEmpty() == 0);

    assert(queue.deQueue() == 8);
    assert(queue.deQueue() == 7);
    assert(queue.isEmpty() == 1);

    queue.enQueue(8);
    queue.enQueue(2);
    queue.enQueue(2);
    for (int i = 0; i < 10; i++) {
        assert(queue.enQueue(i) == 1);
    }
    assert(queue.isFull() == 0);
}



