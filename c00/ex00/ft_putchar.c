#include <unistd.h>

void ft_putchar(char  *c){
	write(1, c, sizeof(c)/sizeof(c[0]));
}

int main(){
	ft_putchar("XX");
	return 0;
}
