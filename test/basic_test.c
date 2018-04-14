#include "../libft_chained_list_src/libft_chained_list.h"

typedef struct s_struct
{
    char *yolo2;
}               t_struct;

void ft_putendl(void *coucou)
{
    char *yolo;
    int i = 0;
    yolo = (char*)coucou;

    while (yolo[i]) {
        i++;
    }
    write(1,yolo, i);
    write(1, "\n", 1);  
}

void do_nothing(void *ptr) {

}

int main(int argc, char **arv)
{
    t_libft_chained_list *first;

    first = NULL;
    add_front_maillon(&first, "data2");
    
    add_back_maillon(&first, "data3");
    delete_chained_list(&first, do_nothing);
    add_back_maillon(&first, "data4");
    add_back_maillon(&first, "data5");
    add_front_maillon(&first, "data1");
    
    remove_maillon(&first, first, do_nothing);
    remove_maillon(&first, first->next, do_nothing);
    remove_maillon(&first, first, do_nothing);

    // if (first != NULL) {
    //     ft_putendl("error");
    // }
    // add_back_maillon(&first, "data4");
    // add_back_maillon(&first, "data5");
    // add_front_maillon(&first, "data1");
    // delete_chained_list(&first, do_nothing);
    // if (first != NULL) {
    //     ft_putendl("error");
    // }
    // add_back_maillon(&first, "data5");

    
    
    // simple_function_on_chained_list(&first, ft_putendl);

}