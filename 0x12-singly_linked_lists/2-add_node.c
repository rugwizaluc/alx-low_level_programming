#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - gets the length of a string
 * @s: string
 * 
 * Return: length of the string
 */
int _strlen(const char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        ;
    return (i);
}
/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list's head
 * @str: string to add in the new node
 * 
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
    int i, len;
    char *content;
    list_t *new;

    if (str == NULL || head == NULL)
        return (NULL);

    len = _strlen(str);

    content = malloc((len + 1) * sizeof(char));
    if (content == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
        content[i] = str[i];
    content[i] = '\0';

    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        free(content);
        return (NULL);
    }

    new->str = content;
    new->len = len;
    new->next = *head;
    *head = new;

    return (new);
}
