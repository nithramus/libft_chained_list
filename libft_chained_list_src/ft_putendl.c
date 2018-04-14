#include "libft_chained_list.h"

void ft_puterror(char *error_message)
{
    int i;

    i = 0;
    while (error_message[i]) {
        i++;
    }
    i = write(2, error_message, i);
    i = write(2, "\n", 1);
}