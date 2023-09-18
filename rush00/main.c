/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onguler <onguler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:01:14 by onguler           #+#    #+#             */
/*   Updated: 2023/09/03 14:25:57 by onguler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int column, int row);

int	ascii_to_int(char *ascii_number)
{
	int	number;
	int	sign;
	int	i;

	number = 0;
	sign = 1;
	i = 0;
	while (ascii_number[i] == '-' || ascii_number[i] == '+')
	{
		if (ascii_number[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ('0' <= ascii_number[i] && ascii_number[i] <= '9')
	{
		number = (number * 10) + ascii_number[i] - '0';
		i++;
	}
	return (number * sign);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		rush(ascii_to_int(argv[1]), ascii_to_int(argv[2]));
	else if (argc == 1)
		rush(5, 5);
	return (0);
}
