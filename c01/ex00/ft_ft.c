#include <unistd.h>
#include <stdio.h>
void print(char c){
	write(1, &c, 1);
}

void ft_ft(int *nbr){
	*nbr = 42;
}

int main(){
	int n;
	printf("%d", n);
	ft_ft(&n);
	printf("%d", n);
	return 0;

}
