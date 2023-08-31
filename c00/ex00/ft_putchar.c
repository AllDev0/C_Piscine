#include <unistd.h>
/*
void ft_putchar(char  *c){
	write(1, c, sizeof(c)/sizeof(c[0]));
}
*/

void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
//	ft_putchar("XX");
	ft_putchar('X');
	return 0;
}
