#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
	*div = a / b;
	*mod = a % b;
}

int main(){
	int a=5, b=3, div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d\n", a, b, div);
	printf("%d %% %d = %d\n", a, b, mod);
}
