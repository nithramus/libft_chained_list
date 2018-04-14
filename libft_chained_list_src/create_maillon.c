#include "libft_chained_list.h"

/*
Malloc a new maillon of the list, set the next and before argument
*/

t_libft_chained_list *create_maillon(t_libft_chained_list *next, t_libft_chained_list *before, void *data)
{
    t_libft_chained_list *maillon;

    maillon = (t_libft_chained_list*)malloc(sizeof(t_libft_chained_list));
    if (!maillon)
    {
        ft_puterror("Failed to create maillon\n");
        return (NULL);
    }
    maillon->next = next;
    maillon->before = before;
    return (maillon);
}