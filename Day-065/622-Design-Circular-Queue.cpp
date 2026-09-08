class MyCircularQueue {
private:
    vector<int> q;
    int frontIndex;
    int rearIndex;
    int count;
    int capacity;

public:
    MyCircularQueue(int k) {
        q.resize(k);
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
        capacity = k;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }

        rearIndex = (rearIndex + 1) % capacity;
        q[rearIndex] = value;
        count++;

        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }

        frontIndex = (frontIndex + 1) % capacity;
        count--;

        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }

        return q[frontIndex];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }

        return q[rearIndex];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};