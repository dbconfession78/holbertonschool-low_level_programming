#include "lists.h"

/**
 * reverse_listint - reverses node order of a listint_t list)
 * @head: list to reverse
 * Return: pointer to first node of reversed list
 */
/* uses only one loop */
/* desn't use malloc, free or arrays */
/* uses only 2 variabls max*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *rev_list = 0;

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = rev_list;
		rev_list = *head;
		*head = temp;
	}
	*head = rev_list;
	return (*head);
}
