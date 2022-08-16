Skip to content
Sign up
Jockthan
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x13-more_singly_linked_lists/9-insert_nodeint.c
@Jockthan
Jockthan advanced
Latest commit 626dae3 1 hour ago
 History
 1 contributor
49 lines (41 sloc)  769 Bytes

#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the head ref
 * @idx: position to insert node
 * @n: variable
 *
 * Return: the address of the new node, or null if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	current = *head;

	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
