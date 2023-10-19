#include <stdio.h>
#include "main.h"

size_t print_list(const list_t *h)
{
    size_t count = 0;

    printf("[");

    while (h != NULL) {
        if (h->str != NULL) {
            printf("%s", h->str);
        } else {
            printf("(nil)");
        }

        count++;

        if (h->next != NULL) {
            printf(", ");
        }

        h = h->next;
    }

    printf("]\n");

    return count;
}
