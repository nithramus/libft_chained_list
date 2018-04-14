#ifndef LIBFT_CHAINED_LIST
#define LIBFT_CHAINED_LIST

#include <stdlib.h>
#include <unistd.h>

typedef struct  s_libft_chained_list {
    struct s_libft_chained_list *next;
    struct s_libft_chained_list *before;
    void                        *data;
}                               t_libft_chained_list;

void ft_puterror(char *error_message);

t_libft_chained_list            *create_maillon(t_libft_chained_list *next, t_libft_chained_list *before, void *data);
void                            add_front_maillon(t_libft_chained_list **first, void *data);
void                            add_back_maillon(t_libft_chained_list **first, void *data);

#endif