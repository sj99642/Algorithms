#ifndef Stack_H
#define Stack_H

#include "unistd.h"
#include "stdbool.h"

typedef struct Stack {
    int* values;
    int maxLength;
    int stackPointer;
} Stack;

Stack* initialise(Stack* stack, int length);
bool isEmpty(Stack* stack);
bool isFull(Stack* stack);
void push(Stack* stack, int value);
int top(Stack* stack);
int pop(Stack* stack);


#endif