#include "bin_tree.h"


void print_value(Node *n)
{
    printf("%d, ", n->data);
}

int *create_integer_array(int size)
{
    int i = 0;
    int *arr = (int *)malloc(sizeof(int) * size);
    while (i < size)
    {
        arr[i] = i + 1;
        i++;
    }
    return arr;
}