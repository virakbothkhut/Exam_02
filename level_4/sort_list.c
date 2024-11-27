#include <stdlib.h>
#include "sort_list.h" // Use this if all definitions are in sort_list.h
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{

    t_list *start;
    start = lst;

    while(lst != NULL && lst->next != NULL)
    {
        if((*cmp)(lst->data, lst->next->data)== 0)
        {
            int swap;
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return start;
}

int ascending(int a, int b)
{
    return (a <= b);
}

t_list *new_node(int data)
{
    t_list *node = malloc(sizeof(t_list));
    if(node)
    {
        node->data = data;
        node->next = NULL;
    }
    return node;
} 

void print_list(t_list *lst)
{
    while(lst != NULL)
    {
        printf("%d->", lst->data);
        lst = lst->next;
    }
    printf("NULL\n");   
}

int main (void)
{
    t_list *head = new_node(9);
    head->next = new_node(5);
    head->next->next = new_node(34);
    head->next->next->next = new_node(23);

    printf("Print original list \n");
    print_list(head);

    head = sort_list(head, ascending);
    print_list(head);
    return 0;

}
