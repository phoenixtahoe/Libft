#include "libft.h"\

void    ft_lstadd(t_list **alst, t_lst *new)
{
    new->next = (*alst);
    (*alst) = new;
}
