#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
  int elements = 0;

  while (h != NULL)
    {
      printf("[%u] %s\n", h->len, h->str);
      h = h->next;
      elements ++;
    }
  return (elements);
}
