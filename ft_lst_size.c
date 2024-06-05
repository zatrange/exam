#include <stdio.h>
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	t_list *head = begin_list;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}