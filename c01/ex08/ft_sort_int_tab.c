#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size){
    bool swapped;
    for (int i = 0; i < size-1; i++){
        swapped = false;
        for(int j = 0; j < size - i - 1; j++){
            if (tab[j] > tab[j+1]){
                swap(&tab[j], &tab[j+1]);
                swapped = true;
            }
        }

        if (swapped == false){
            break;
        }
    }
}

int main(){
    int tab[] = {3, 1, 2, 0, 5, 4};
    int size = sizeof(tab) / sizeof(tab[0]);
    printf("Before sorting\n");
    for (int i = 0; i < size; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    ft_sort_int_tab(tab, size);
    printf("After sorting\n");
    for (int i = 0; i < size; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}