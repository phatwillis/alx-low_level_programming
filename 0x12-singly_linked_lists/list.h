#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Singly linked list node
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node in the list
 *
 * Description: Defines a node in a singly linked list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h);

/**
 * list_len - Counts the number of nodes in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the newly created node.
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees the memory allocated for a linked list.
 * @head: A pointer to the head of the list.
 */
void free_list(list_t *head);

#endif
