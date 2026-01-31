//
// Created by Vividh Prabu on 31/01/26.
//
#include <stdio.h>
#define M 5

int queue[M];
int front = -1, rear = -1;

void enqueue() {
    int x;
    if ((front == 0 && rear == M - 1) || (rear + 1 == front)) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element to enqueue: ");
    scanf("%d", &x);

    if (front == -1) {
        front = rear = 0;
    } else if (rear == M - 1) {
        rear = 0;
    } else {
        rear++;
    }

    queue[rear] = x;
    printf("Enqueued %d\n", x);
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Dequeued %d\n", queue[front]);

    if (front == rear) {
        front = rear = -1;
    } else if (front == M - 1) {
        front = 0;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % M;
    }
    printf("%d\n", queue[rear]);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- CIRCULAR QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice\n");
        }
    }
}
