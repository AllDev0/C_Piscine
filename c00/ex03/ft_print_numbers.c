#include <unistd.h>

void ft_print_numbers(void){
	char digit = '1';
	while(digit <= '9'){
		write(1, &digit, 1);
		digit++;
	}
}

int main(){
	ft_print_numbers();
	return 0;
}
