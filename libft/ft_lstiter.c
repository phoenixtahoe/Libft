#include "libft.h"

void    ft_lstiter(t_list *alst, void(*f)(t_list *elem))
{
    while (alist)
    {
        f(alst);
        alst = alst->next;
    }
}
