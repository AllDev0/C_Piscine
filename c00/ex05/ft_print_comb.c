#include <unistd.h>

void print(char n){
	write(1, &n, 1);
}

void ft_print_comb(){
	char a, b, c;

	a='0';
	while(a <= '7'){
		b = a + 1;
		while(b <= '8'){
			c = b + 1;
			while(c <= '9'){
				print(a);
				print(b);
				print(c);
				
				if (a != '7' || b != '8' || c != '9'){
					print(',');
					print(' ');
				}

				c++;
			}

			b++;
		}

		a++;
	}
}

int main(){
	ft_print_comb();
	return 0;
}

