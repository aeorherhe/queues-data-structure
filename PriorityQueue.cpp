//
// Created by Abraham E. Orherhe on 31/10/2024.
//

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(const int size) : Queue(size) {}

PriorityQueue::~PriorityQueue() = default;

int PriorityQueue::getMin() const {
    int min = data[front];
    for (int i = front; i <= rear; i++) {
        if (data[i] < min) min = data[i];
    }
    return min;
}

int PriorityQueue::getMax() const {
    int max = data[front];
    for (int i = front; i <= rear; i++) {
        if (data[i] > max) max = data[i];
    }
    return max;
}

void PriorityQueue::insert(const int value) {
    if (isFull()) {
        log("Queue is full");
        return;
    }

    if (isEmpty())
    {
        enqueue(value);
        return;
    }

    int i = rear;
    while (i >= front && value < data[i]) {
        data[(i + 1) % size] = data[i];
        i--;
    }

    data[(i + 1) % size] = value;
    rear = (rear + 1) % size;
    count++;
}