#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: stacker of a doubly linked list
 * @line_number: Number line called
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!stack || !*stack || !(*stack)->next)
	{
		print_error(line_number, "can't swap, stack too short");
		return;
	}

	*stack = (*stack)->next;
	temp->prev = *stack;
	temp->next = (*stack)->next;
	(*stack)->next = temp;
	(*stack)->prev = NULL;
}
