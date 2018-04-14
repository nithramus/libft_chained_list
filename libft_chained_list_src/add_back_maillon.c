#include "libft_chained_list.h"

void    add_back_maillon(t_libft_chained_list **first, void *data)
{
    if (!(*first))
    {
        *first = create_maillon(NULL, NULL, data);
    }
    else
    {
        while ((*first)->next) {
            (*first) = (*first)->next;
        }
        (*first)->next = create_maillon(NULL, first, data);
    }
}