//
// Created by Vividh Prabu on 06/02/26.
//
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* insertFront(struct node* head, int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    return newnode;
}

struct node* insertEnd(struct node* head, int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL)
        return newnode;
    struct node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newnode;
    return head;
}

struct node* insertMiddle(struct node* head, int pos, int value) {
    if (pos == 1) return insertFront(head, value);
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    struct node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) temp = temp->next;
    if (temp == NULL) return head;
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

struct node* deleteFront(struct node* head) {
    if (head == NULL) return NULL;
    struct node* temp = head->next;
    free(head);
    return temp;
}

struct node* deleteEnd(struct node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) { free(head); return NULL; }
    struct node* temp = head;
    while (temp->next->next != NULL) temp = temp->next;
    free(temp->next);
    temp->next = NULL;
    return head;
}

struct node* deleteMiddle(struct node* head, int pos) {
    if (pos == 1) return deleteFront(head);
    if (head == NULL) return NULL;
    struct node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) temp = temp->next;
    if (temp->next == NULL) return head;
    struct node* toDel = temp->next;
    temp->next = toDel->next;
    free(toDel);
    return head;
}

void printList(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int searchList(struct node* head, int key) {
    struct node* temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
}

int main() {
    struct node* head = NULL;
    printf("\nSubmitted by: VIVIDH\nRegister No: 25BAI1467\n");

    head = insertFront(head, 20);
    head = insertEnd(head, 90);
    head = insertMiddle(head, 2, 30);
    printf("\nAfter insertions from all sides: ");
    printList(head);

    head = deleteFront(head);
    printf("After front deletion: ");
    printList(head);

    head = deleteMiddle(head, 1);  // delete pos 1 (45)
    printf("After middle deletion: ");
    printList(head);  // 50

    head = insertEnd(head, 60);
    printf("After end insertion: ");
    printList(head);  // 50 60

    head = deleteEnd(head);
    printf("After end deletion: ");
    printList(head);  // 50
    printf("Search 50: %d\n", searchList(head, 90));
    printf("Search 99: %d\n", searchList(head, 1));

    while (head != NULL) head = deleteFront(head);
    return 0;
}
