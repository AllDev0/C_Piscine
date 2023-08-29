#include <unistd.h>
//#include <stdio.h>

void print(char c){
	write(1, &c, 1);
}

void ft_putnbr(int n){
	if(n < 0){
		//printf("Minus : %d\n", n);
		print('-');
		n = -n;
	}

	if(n < 10){
		//printf("Smaller than 10 : %d\n", n);
		print(n  + '0');
	}

	else{
		//printf("Bigger than 10 : %d\n", n);
		ft_putnbr(n / 10);
		print((n % 10) + '0');
	}
}

int main(){
	ft_putnbr(12345);
	print('\n');
	ft_putnbr(-6789);
	print('\n');
	return 0;
}
