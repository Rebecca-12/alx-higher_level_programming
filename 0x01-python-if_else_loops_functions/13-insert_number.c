#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s 
{
	int n;
	struct listint_s *next;
} 
listint_t;

listint_t *create_node(int number) 
{

	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) 
	{
		return (NULL);
	}
	new_node->n = number;
	new_node->next = NULL;
	return (new_node);
}

listint_t *find_insert_position(listint_t **head, int number) 
{

	listint_t *current = *head;
	listint_t *prev = NULL;
	while (current != NULL && current->n < number) 
	{
		prev = current;
		current = current->next;
	}
    return (prev);
}

listint_t *insert_node(listint_t **head, int number) 
{

	listint_t *new_node = create_node(number);
	if (new_node == NULL) 
	{
		return (NULL);
	}
	if (*head == NULL || number < (*head)->n) 
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	listint_t *prev = find_insert_position(head, number);
	new_node->next = prev->next;
	prev->next = new_node;
	return new_node;
}

void print_listint(listint_t *head) 
{

	listint_t *current = head;
	while (current != NULL) 
	{
		printf("%d", current->n);
		if (current->next != NULL) 
		{
			printf(" -> ");
		}
		current = current->next;
	}
	printf("\n");
}

void free_listint(listint_t *head) 
{
	listint_t *current = head;
	while (current != NULL) 
	{
		listint_t *temp = current;
		current = current->next;
		free(temp);
	}
}

int main(void) 
{

	listint_t *head = NULL;

	insert_node(&head, 5);
	insert_node(&head, 10);
	insert_node(&head, 7);
	insert_node(&head, 3);
	
	print_listint(head);
	free_listint(head);

	return (0);
}
