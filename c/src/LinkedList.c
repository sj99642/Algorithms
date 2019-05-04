#include "headers/LinkedList.h"

// For some reason VSCode doesn't know what NULL is
#ifndef NULL
#define NULL (void*) 0
#endif

typedef struct LinkedList {
    struct LinkedList* next;
    int key;
    void* value;
} LinkedList;

/**
 * Goes all the way to the end of the list and adds the item.
 */
LinkedList* addLast(LinkedList* list, LinkedList* newItem)
{
    // If this list is already null, just return the item as the first item
    if (list == NULL) return newItem;

    // Iterate through the list until list->next is NULL
    while (list->next != NULL)
    {
        list = list->next;
    }

    // Now list->next is NULL, so add the new item
    list->next = newItem;
}

/**
 * Adds something to the start of the list.
 */
LinkedList* addFirst(LinkedList* list, LinkedList* newItem)
{
    newItem->next = list;
    return newItem;
}

/**
 * Removes the item with the given key in the list.
 */
LinkedList* delete(LinkedList* list, int key)
{
    // If already NULL, nothing can be done
    if (list == NULL) return list;

    // Iterate through until the next item is null
    while (list->next != NULL)
    {
        // Check if the next item needs deleting
        if (list->next->key == key)
        {
            // Delete the next item by linking this to its next
            list->next = list->next->next;
        }
    }
}

/**
 * Puts the given item at the given place in the list. 
 */
LinkedList* insert(LinkedList* list, LinkedList* item, int place)
{
    LinkedList* current = list;

    // Decrease place until we have reached the correct position
    for (; place >= 0; place--)
    {
        if (current == NULL) {
            return list;
        }
    }

    // Set the rest of the list to follow the new one
    item->next = list->next;

    // Set the new one to follow the rest
    list->next = item;
}