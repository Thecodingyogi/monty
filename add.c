#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, new;

	temp = *head;
	while (h)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	new = temp->n + temp->next->n;
	temp->next->n = new;
	*head = temp->next;
	free(temp);
}
