#include "libft.h"

t_list *ft_lstmap(t_list *alst, t_list *(*f)(t_list *elem))
{
    t_list i;

    if (alst)
    {
        i = f(alst);
        i->next = ft_lstmap(lst->next, f);
        return (i);
    }
    return (NULL);
}