#include "Stack.h"

#include <stdlib.h>
#include <limits.h>

/**
 * Initialises the given stack to zero
 */
Stack* initialise(Stack* stack, int length)
{
    stack->values = (int*) malloc(length * sizeof(int));
    stack->maxLength = length;
    stack->stackPointer = 0;
}

/**
 * Returns true if the stack is empty or false otherwise
 */
bool isEmpty(Stack* stack)
{
    return stack->stackPointer == 0;
}

/**
 * Returns true if the stack is full or false otherwise
 */
bool isFull(Stack* stack)
{
    return stack->stackPointer >= stack->maxLength;
}

/**
 * Pushes a value to the stack
 */
void push(Stack* stack, int value)
{
    if (stack->stackPointer < stack->maxLength) {
        stack->values[stack->stackPointer] = value;
        stack->stackPointer++;
    }
}

/**
 * Returns the top item without removing it. If the stack is empty, return the minimum integer.
 */
int top(Stack* stack)
{
    if (stack->stackPointer != 0) {
        return stack->values[stack->stackPointer - 1];
    }

    return INT_MIN;
}

/**
 * Pops the item from the top of the stack. If it is empty, return the minimum integer.
 */
int pop(Stack* stack)
{
    if (stack->stackPointer != 0) {
        stack->stackPointer--;
        return stack->values[stack->stackPointer];
    }

    return INT_MIN;
}