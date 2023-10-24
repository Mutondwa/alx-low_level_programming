#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *advance;
	listint_t *temp = *head;

	advance = malloc(sizeof(listint_t));
	if (!advance || !head)
		return (NULL);

	advance->n = n;
	advance->next = NULL;

	if (idx == 0)
	{
		advance->next = *head;
		*head = advance;
		return (advance);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			advance->next = temp->next;
			temp->next = advance;
			return (advance);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
