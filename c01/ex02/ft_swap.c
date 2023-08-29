#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a=3, b=5;
	printf("a: %d - b: %d", a, b);
	ft_swap(&a, &b);
	printf("a: %d - b: %d", a, b);
}
