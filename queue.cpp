//
// Created by Abraham E. Orherhe on 31/10/2024.
//

// #include <cassert>
#include "queue.h"

Queue::Queue(const int size) : count(0), front(0), rear(-1), size(size), data(new int[size]) {};

Queue::~Queue() { delete[] data; }

int Queue::getFront() const { return data[front]; }

int Queue::getRear() const { return data[rear]; }

int Queue::getSize() const { return size; }

bool Queue::isEmpty() const { return count == 0; }

bool Queue::isFull() const { return count == size; }

int Queue::getCurrentSize() const { return count; }

void Queue::enqueue(const int value) {
    // assert(isFull() == "false");
    if (isFull()) {
        log("Queue is full");
        return;
    }

    rear = (rear + 1) % size;
    data[rear] = value;
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        log("Queue is empty");
        return -1;
    }

    const int value = data[front];
    front = (front + 1) % size;
    count--;
    return value;
}

void Queue::clear() {
    front = 0;
    rear = -1;
    count = 0;
}

void Queue::display() const
{
    for (int i = 0; i <= count; i++) {
        log(data[i]);
    }
}
