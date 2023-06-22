pop.c
#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);/** fclose bus */
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);/** exit failure */
	}
	h = *head;
	*head = h->next;
	free(h);/** free h */
}
