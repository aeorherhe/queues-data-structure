//
// Created by Abraham E. Orherhe on 31/10/2024.
//

#pragma once

#include "queue.h"

class PriorityQueue : public Queue {
public:
    explicit PriorityQueue(int size);
    ~PriorityQueue();

    [[nodiscard]] int getMin() const;
    [[nodiscard]] int getMax() const;

    void insert(int value);
};
