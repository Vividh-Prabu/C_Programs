//
// Created by Vividh Prabu on 31/01/26.
//
#include <stdio.h>
#define M 10

int deque[M];
int front = -1, rear = -1;

void enqueueFront() {
    int x;
    if (front == 0) {
        printf("Overflow at Front\n");
        return;
    }
    printf("Enter element: ");
    scanf("%d", &x);

    if (front == -1) {
        front = rear = 0;
    } else {
        front--;
    }
    deque[front] = x;
}

void enqueueRear() {
    int x;
    if (rear == M - 1) {
        printf("Overflow at Rear\n");
        return;
    }
    printf("Enter element: ");
    scanf("%d", &x);

    if (rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    deque[rear] = x;
}

void dequeueFront() {
    if (front == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Deleted %d\n", deque[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

void dequeueRear() {
    if (rear == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Deleted %d\n", deque[rear]);

    if (front == rear) {
        front = rear = -1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        printf("Deque is Empty\n");
        return;
    }
    printf("Deque elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", deque[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- DEQUE MENU ---\n");
        printf("1. Enqueue Front\n");
        printf("2. Enqueue Rear\n");
        printf("3. Dequeue Front\n");
        printf("4. Dequeue Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueueFront(); break;
            case 2: enqueueRear(); break;
            case 3: dequeueFront(); break;
            case 4: dequeueRear(); break;
            case 5: display(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
