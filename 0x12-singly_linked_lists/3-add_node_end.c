#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(const char *s) {
  int i;

  for (i = 0; s[i]; i++)
    ;
  return (i);
}

/**
 * _strdup - duplicates a string
 * @src: source string to duplicate
 *
 * Return: pointer to the duplicated string or NULL if failed
 */
char *_strdup(const char *src) {
  int len, i;
  char *dest;

  len = _strlen(src);
  dest = malloc((len + 1) * sizeof(char));
  if (dest == NULL)
    return (NULL);

  for (i = 0; src[i]; i++)
    dest[i] = src[i];
  dest[i] = '\0';

  return (dest);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer to the head of the list
 * @str: string to add in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str) {
  list_t *new, *current;
  char *dupstr;

  if (str == NULL)
    return (NULL);

  dupstr = _strdup(str);
  if (dupstr == NULL)
    return (NULL);

  new = malloc(sizeof(list_t));
  if (new == NULL) {
    free(dupstr);
    return (NULL);
  }

  new->str = dupstr;
  new->len = _strlen(str);
  new->next = NULL;

  if (*head == NULL) {
    *head = new;
  } else {
    current = *head;
    while (current->next != NULL)
      current = current->next;
    current->next = new;
  }

  return (new);
}
