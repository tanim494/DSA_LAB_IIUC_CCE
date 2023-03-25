
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5

int items[MAX_SIZE];
int front = -1, rear = -1;

bool isFull() {
    return ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1));
}

bool isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        items[rear] = value;
        printf("Inserted %d\n", value);
    }
}

int dequeue() {
    int value;
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    } else {
        value = items[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        printf("Deleted element is %d\n", value);
        return value;
    }
}

void display() {
    int i;
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for (i = front; i != rear; i = (i + 1) % MAX_SIZE) {
            printf("%d ", items[i]);
        }
        printf("%d\n", items[i]);
    }
}

int main() {
    enqueue(13);
    enqueue(7);
    enqueue(6);
    enqueue(9);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(33);
    enqueue(99);
    display();
    return 0;
}
