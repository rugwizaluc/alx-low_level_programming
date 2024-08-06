#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head) {
  if (head == NULL)
    return;

  free_list(head->next);
  free(head->str);
  free(head);
}
