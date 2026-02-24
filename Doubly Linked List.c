//
// Created by Vividh Prabu on 06/02/26.
//
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

struct node* insertFront(struct node* head, int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL) head->prev = newnode;
    return newnode;
}

struct node* insertEnd(struct node* head, int value)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL) return newnode;
    struct node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    return head;
}

struct node* insertMiddle(struct node* head, int pos, int value)
{
    if (pos == 1) return insertFront(head, value);
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    struct node* temp = head;
    int i;
    for (i = 1; i < pos && temp != NULL; i++) temp = temp->next;
    if (temp == NULL)
    {
        free(newnode);
        return head;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != NULL)temp->next->prev = newnode;
    temp->next = newnode;
    return head;
}

struct node* deleteFront(struct node* head)
{
    if (head == NULL) return NULL;
    struct node* temp = head->next;
    if (temp != NULL) temp->prev = NULL;
    free(head);
    return temp;
}

struct node* deleteEnd(struct node* head)
{
    if (head == NULL) return NULL;
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
    return head;
}

struct node* deleteMiddle(struct node* head, int pos)
{
    if (pos == 1) return deleteFront(head);
    if (head == NULL) return NULL;
    struct node* temp = head;
    int i;
    for (i = 1; i < pos && temp != NULL; i++) temp = temp->next;
    if (temp == NULL || temp->next == NULL) return head;
    struct node* toDel = temp->next;
    temp->next = toDel->next;
    if (toDel->next != NULL) toDel->next->prev = temp;
    free(toDel);
    return head;
}

void printList(struct node* head)
{
    struct node* temp = head;
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int searchList(struct node* head, int key)
{
    struct node* temp = head;
    int pos = 1;
    while (temp != NULL)
    {
        if (temp->data == key) return pos;
        temp = temp->next;
        pos++;
    }
    return -1;
}

int main() {
    struct node* head = NULL;
    int choice, value, pos;
    printf("\nSubmitted by: VIVIDH\nRegister No: 25BAI1467\n");

    while (1)
    {
        printf("\nMenu:\n1-Insert Front\n2-Insert Middle\n3-Insert End\n4-Delete Front\n5-Delete Middle\n6-Delete End\n7-Print\n8-Search\n0-Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Value: "); scanf("%d", &value);
                head = insertFront(head, value);
                break;
            case 2:
                printf("Pos Value: "); scanf("%d%d", &pos, &value);
                head = insertMiddle(head, pos, value);
                break;
            case 3:
                printf("Value: "); scanf("%d", &value);
                head = insertEnd(head, value);
                break;
            case 4:
                head = deleteFront(head);
                break;
            case 5:
                printf("Pos: "); scanf("%d", &pos);
                head = deleteMiddle(head, pos);
                break;
            case 6:
                head = deleteEnd(head);
                break;
            case 7:
                printList(head);
                break;
            case 8:
                printf("Key: "); scanf("%d", &value);
                pos = searchList(head, value);
                printf("Found at %d\n", pos == -1 ? pos : pos);
                break;
            case 0:
                return 0;
            default:
                printf("Invalid\n");
        }
    }
}
