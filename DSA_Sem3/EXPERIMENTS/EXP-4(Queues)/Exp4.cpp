#include <iostream>

class QueueArray {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int size;

public:
    QueueArray(int maxCapacity) {
        capacity = maxCapacity;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    ~QueueArray() {
        delete[] arr;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int item) {
        if (isFull()) {
            std::cerr << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
            return -1; // Or you can throw an exception
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }
};

int main() {
    QueueArray myQueue(5); // Create a queue with a capacity of 5

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Dequeued item: " << myQueue.dequeue() << std::endl;
    std::cout << "Dequeued item: " << myQueue.dequeue() << std::endl;

    return 0;
}
