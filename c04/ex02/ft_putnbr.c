#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		ft_putnbr(147483648);
	}
	else if (num < 0)
	{
		ft_print('-');
		num *= -1;
		ft_putnbr(num);
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_print(num + 48);
}
