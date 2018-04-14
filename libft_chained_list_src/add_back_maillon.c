#include "libft_chained_list.h"

void    add_back_maillon(t_libft_chained_list **first, void *data)
{
    t_libft_chained_list *tmp;

    if (!(*first))
    {
        *first = create_maillon(NULL, NULL, data);
    }
    else
    {   
        tmp = *first;
        while (tmp->next) {
            tmp = tmp->next;
        }
        tmp->next = create_maillon(NULL, tmp, data);
    }
}