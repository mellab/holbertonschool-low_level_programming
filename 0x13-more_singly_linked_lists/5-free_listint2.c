#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *currentNode;

	if (head != NULL)
	{
		currentNode = *head;
		while ((tmp = currentNode) != NULL)
		{
			currentNode = currentNode->next;
			free(tmp);
		}
		*head = NULL;
	}
}
