#include "PriorityQueue.h"
// #include "queue.h"

int main()
{

    auto *queue = new Queue(5);
    auto *priorityQueue = new PriorityQueue(6);

    // enqueue
    queue->enqueue(1);
    queue->enqueue(2);
    queue->enqueue(3);

    // display
    log("Enqueued 1, 2, 3");
    queue->display();

    // dequeue
    log("Dequeued item");
    log(queue->dequeue());

    // display
    log("Data after dequeue");
    queue->display();

    // divider
    log("Priority Queue");

    // priority queue
    priorityQueue->insert(10);
    priorityQueue->insert(5);
    priorityQueue->insert(15);
    priorityQueue->insert(20);

    // display
    log("Inserted 10, 5, 15, 20");
    priorityQueue->display();

    // get min and max
    log("printing min and max");
    log(priorityQueue->getMin());
    log(priorityQueue->getMax());

    // insert at correct position
    priorityQueue->insert(30);
    priorityQueue->insert(14);

    // display
    log("Inserted 30, 14 at correct position");
    priorityQueue->display();

    // dequeue
    log("Dequeued first item");
    log(priorityQueue->dequeue());

    // display
    log("Data after dequeue");
    priorityQueue->display();
}

