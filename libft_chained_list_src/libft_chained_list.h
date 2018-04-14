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
void                            remove_maillon(t_libft_chained_list **first, t_libft_chained_list *maillon, void (*delete_data)(void*));
void                            function_on_chained_list(t_libft_chained_list **first, void (*function)(t_libft_chained_list**, t_libft_chained_list*, void*), void *params);
void                            simple_function_on_chained_list(t_libft_chained_list **first, void (*function)(void*));
void                            delete_chained_list(t_libft_chained_list **first, void (*delete_data)(void*));
void    remove_maillon(t_libft_chained_list **first, t_libft_chained_list *maillon, void (*delete_data)(void*));




#endif