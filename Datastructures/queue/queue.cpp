#include "queue.hpp"
#include <iostream>

using namespace std;

Queue::Queue(int capacity) {
    front = -1;
    rear = -1;
    size = capacity;
    queue = new int[size];  // Use square brackets for array allocation
}

bool Queue::isEmpty() {
    return front == -1;
}

bool Queue::isFull() {
    return rear == size - 1;
}

void Queue::enquev(int value) {  // Corrected the spelling to `enquev`
    if (isFull()) {
        cout << "Queue esta lleno: " << '\n';
        return;
    }

    if (front == -1) {
        front = 0;
    }
    queue[++rear] = value;
    cout << value << " enque to queue" << '\n';
}

void Queue::dequeue() {
    if (isEmpty()) {
        cout << "empty queue" << '\n';
        return;
    }
    cout << queue[front] << " dequeue front" << '\n';
    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    }
}

int Queue::frontElement() {
    if (isEmpty()) {
        cout << "Empty queue" << endl;
        return -1;
    }
    return queue[front];
}

Queue::~Queue() {
    delete[] queue;
}
