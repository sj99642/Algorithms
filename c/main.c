#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

void runLinkedListTest()
{
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));
    list->key = 1;
    list->value = (int*) 15;
    
    // Item 2 - To go at the end
    LinkedList* item2 = (LinkedList*) malloc(sizeof(LinkedList));
    item2->key = 20;
    item2->value = (int*) 30;

    // Item 3 - To go at the start
    LinkedList* item3 = (LinkedList*) malloc(sizeof(LinkedList));
    item3->key = 8;
    item3->value = (int*) 45;

    // Item 4 - Should end up second last
    LinkedList* item4 = (LinkedList*) malloc(sizeof(LinkedList));
    item4->key = 100;
    item4->value = (int*) 100;

    list = addLast(list, item2);
    list = addFirst(list, item3);
    list = insert(list, item4, 2);
    printList(list);
}

void runStackTest()
{
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    initialiseStack(stack, 5);

    // []
    pushStack(stack, 5);
    // [5]
    pushStack(stack, 7);
    // [5, 7]
    pushStack(stack, 9);
    // [5, 7, 9]
    printf("%d; ", stackTop(stack));
    // [5, 7, 9]
    pushStack(stack, 11);
    // [5, 7, 9, 11]
    printf("%d; ", isStackFull(stack));
    // [5, 7, 9, 11]
    pushStack(stack, 13);
    // [5, 7, 9, 11, 13]
    printf("%d; ", isStackFull(stack));
    // [5, 7, 9, 11, 13]
    printf("%d; ", stackPop(stack));
    // [5, 7, 9, 11]
    printf("%d; ", stackPop(stack));
    // [5, 7, 9]
    printf("%d; ", stackPop(stack));
    // [5, 7]
    printf("%d; ", stackPop(stack));
    // [5]
    printf("%d; ", isStackEmpty(stack));
    // [5]
    printf("%d; ", stackPop(stack));
    // []
    printf("%d; ", isStackEmpty(stack));
    // [
    printf("%d\n", stackPop(stack));
}

void runQueueTest()
{
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    initialiseQueue(queue, 5);

    // []
    enqueue(queue, 10);
    // [10]
    printf("%d; ", dequeue(queue));
    // []
    enqueue(queue, 1);
    // [1]
    enqueue(queue, 2);
    // [1, 2]
    enqueue(queue, 3);
    // [1, 2, 3]
    printf("%d; ", nextInQueue(queue));
    // [1, 2, 3]
    printf("%d; ", dequeue(queue));
    // [2, 3]
    enqueue(queue, 4);
    // [2, 3, 4]
    enqueue(queue, 5);
    // [2, 3, 4, 5]
    printf("%d; ", isQueueFull(queue));
    // [2, 3, 4, 5]
    enqueue(queue, 6);
    // [2, 3, 4, 5, 6]
    printf("%d; ", isQueueFull(queue));
    // [2, 3, 4, 5, 6]
    dequeue(queue);
    // [3, 4, 5, 6]
    dequeue(queue);
    // [4, 5, 6]
    dequeue(queue);
    // [5, 6]
    dequeue(queue);
    // [6]
    printf("%d; ", isQueueEmpty(queue));
    // [6]
    dequeue(queue);
    // []
    printf("%d\n", isQueueEmpty(queue));
}

int main(int a, char** args)
{
    runLinkedListTest();
    runStackTest();
    runQueueTest();
}