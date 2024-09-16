#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
	int	elements = 0;
	while (begin_list != NULL)
	{
		elements++;
		begin_list = begin_list ->next;
	}
	return (elements);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // Crear nodos individuales
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
	t_list *node4 = malloc(sizeof(t_list));

    // Asignar valores y enlazar los nodos
    node1->data = "Node 1";
    node1->next = node2;

    node2->data = "Node 2";
    node2->next = node3;

    node3->data = "Node 3";
    node3->next = node4;

	node4->data = "Node 4";
	node4->next = NULL;


    // Llamar a la función ft_list_size
    int size = ft_list_size(node1);

    // Imprimir el resultado
    printf("El tamaño de la lista es: %d\n", size);

    // Liberar la memoria asignada
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
