#include <stdio.h>
#include <stdlib.h>

#include "LinkedList.h"

int main(int a, char** args)
{
    runLinkedListTest();
}

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