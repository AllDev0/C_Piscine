#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str){
	int result = 0;
	while(str[result] != '\0'){
		result++;
	}

	return result;
}

int main(){
	char *str = "Hello World!";
	printf("str : %s - size of str : %d", str, ft_strlen(str));
	return 0;
}
