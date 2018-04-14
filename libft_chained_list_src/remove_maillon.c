#include "libft_chained_list.h"

static void    free_maillon(t_libft_chained_list *maillon) 
{
    free(maillon->data);
    free(maillon);
}

void    remove_maillon(t_libft_chained_list **first, t_libft_chained_list *maillon)
{
    if (!maillon)
    {
        ft_puterror("Sending NULL as maillon");
        return;
    }
    if (!maillon->before)
    {
        if (!maillon->next)
        {
            free_maillon(maillon);
            *first = NULL;
        }
        else
        {
            *first = (*first)->next;
            free_maillon(maillon);
        }
    }
    else
    {
        maillon->before->next = maillon->next;
        if (maillon->next)
        {
            maillon->next->before = maillon->before;
        }
        free(maillon);
    }
}