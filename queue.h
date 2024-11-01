//
// Created by Abraham E. Orherhe on 31/10/2024.
//
#pragma once

#include <iostream>


#define log(x) std::cout << x << std::endl;

class Queue {
protected:
    int count, front, rear, size;
    int *data;

public:
    explicit Queue(int size);
    ~Queue();

    // Operations
    [[nodiscard]] bool isEmpty() const;
    [[nodiscard]] bool isFull() const;
    [[nodiscard]] int getSize() const;
    [[nodiscard]] int getFront() const;
    [[nodiscard]] int getRear() const;
    [[nodiscard]] int getCurrentSize() const;
    void enqueue(int value);
    int dequeue();

    void clear();
    void display() const;
};
