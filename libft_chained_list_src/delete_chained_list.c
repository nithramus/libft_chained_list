#include "libft_chained_list.h"

void free_chained_list(t_libft_chained_list **first, t_libft_chained_list *maillon, void *params)
{
    free(maillon);
    first += 1-1;
    params += 1-1;
}

void    delete_chained_list(t_libft_chained_list **first, void delete_data(void*))
{
    simple_function_on_chained_list(first, delete_data);
    function_on_chained_list(first, free_chained_list, NULL);
    *first = NULL;
}