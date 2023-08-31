#include <unistd.h>
#include <stdio.h>

void ft_reverse_tab(int *tab, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;

        start++;
        end--;
    }
}

int main(){
    int tab[] = {3, 1, 2, 0, 5, 4};
    int size = sizeof(tab) / sizeof(tab[0]);
    printf("Before reversing\n");
    for(int i=0; i<size; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    ft_reverse_tab(tab, size);
    printf("After reversing\n");
    for(int i=0; i<size; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}