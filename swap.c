#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, new;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	new = temp->n;
	temp->n = temp->next->n;
	temp->next->n = new;
}
