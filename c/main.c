#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"
#include "Stack.h"

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
    initialise(stack, 5);

    // []
    push(stack, 5);
    // [5]
    push(stack, 7);
    // [5, 7]
    push(stack, 9);
    // [5, 7, 9]
    printf("%d; ", top(stack));
    // [5, 7, 9]
    push(stack, 11);
    // [5, 7, 9, 11]
    printf("%d; ", isFull(stack));
    // [5, 7, 9, 11]
    push(stack, 13);
    // [5, 7, 9, 11, 13]
    printf("%d; ", isFull(stack));
    // [5, 7, 9, 11, 13]
    printf("%d; ", pop(stack));
    // [5, 7, 9, 11]
    printf("%d; ", pop(stack));
    // [5, 7, 9]
    printf("%d; ", pop(stack));
    // [5, 7]
    printf("%d; ", pop(stack));
    // [5]
    printf("%d; ", isEmpty(stack));
    // [5]
    printf("%d; ", pop(stack));
    // []
    printf("%d; ", isEmpty(stack));
    // [
    printf("%d\n", pop(stack));
}

int main(int a, char** args)
{
    runLinkedListTest();
    runStackTest();
}