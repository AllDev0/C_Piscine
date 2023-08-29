#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){
	int tempA = *a, tempB = *b;
	*a = tempA / tempB;
	*b = tempA % tempB;
}

int main(){
	int a=5, b=3;
	printf("a: %d - b: %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d - b: %d", a, b);
	return 0;
}
