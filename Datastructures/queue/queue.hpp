#ifndef QUEUE_HPP
#define QUEUE_HPP

class Queue {
    private:
        int front, size, rear;
        int* queue;
    
    public:
        Queue(int capacity);
        bool isEmpty();
        bool isFull();
        void enquev(int value);
        void dequeue();
        ~Queue();
        int frontElement();
};

#endif //QUEUE_HPP
