#include "ft_list.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		(*f)(begin_list->data);
		begin_list = begin_list -> next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
// Función que se pasará a ft_list_foreach
void print_data(void *data)
{
    printf("%s\n", (char *)data);
}
//print pointer function
void	print_pointer(void *next)
{
	printf("%p\n", (void *)next);
}
//print node name function
void	print_node(void *t_list)
{
	printf("%s\n", (char *)t_list);
}

int main(void)
{
    // Crear nodos individuales
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    // Asignar valores y enlazar los nodos
    node1->data = "Node 1";
    node1->next = node2;

    node2->data = "Node 2";
    node2->next = node3;

    node3->data = "Node 3";
    node3->next = NULL;

    // Llamar a la función ft_list_foreach con la función print_data
    ft_list_foreach(node1, print_data);

    // Liberar la memoria asignada
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
