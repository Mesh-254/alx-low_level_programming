#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
int i;
size_t len = 0;
for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}

