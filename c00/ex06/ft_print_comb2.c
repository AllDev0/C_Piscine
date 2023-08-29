#include <unistd.h>

void print(char c){
	write(1, &c, 1);
}

void ft_print_comb2(){
	int num1, num2;

	num1 = 0;
	while(num1 <= 98){
		num2 = num1 + 1;
		while(num2 <= 99){
			print((num1 / 10) + '0');
			print((num1 % 10) + '0');
			print(' ');
			print((num2 / 10) + '0');
			print((num2 % 10) + '0');

			if (num1 != 98 || num2 != 99){
				print(',');
				print(' ');
			}

			num2++;
		}

		num1++;
	}
}

int main(){
	ft_print_comb2();
	return 0;
}
