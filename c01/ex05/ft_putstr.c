#include <unistd.h>
#include <stdio.h>
#include <string.h>

int findLength(char *str){
	int result = 0;
	while(str[result] != '\0'){
		result++;
	}

	return result;
}

void ft_putstr(char *str){
	write(1, str, findLength(str));
}

int main(){
	ft_putstr("Hello World");
	return 0;
}
