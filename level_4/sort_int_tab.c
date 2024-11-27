#include <unistd.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
   unsigned int i = 0;
   int temp;
   while(i < (size-1))
   {
        if(tab[i] > tab[i+1])
        {
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
            i = 0;
        }
        else{
            i++;
        }
   }
}

void print_array(int *arr, unsigned int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {5, 2, 9, 1, 5, 6};
    unsigned int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array: ");
    print_array(tab, size);

    sort_int_tab(tab, size);

    printf("Sorted array: ");
    print_array(tab, size);

    return 0;
}