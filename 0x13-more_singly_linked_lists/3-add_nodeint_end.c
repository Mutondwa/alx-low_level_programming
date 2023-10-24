#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *advance;
	listint_t *temp = *head;

	advance = malloc(sizeof(listint_t));
	if (!advance)
		return (NULL);

	advance->n = n;
	advance->next = NULL;

	if (*head == NULL)
	{
		*head = advance;
		return (advance);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = advance;

	return (advance);
}
