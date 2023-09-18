/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onguler <onguler@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:01:06 by onguler           #+#    #+#             */
/*   Updated: 2023/09/03 12:59:27 by onguler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	print_wanted_char(int row, int column,
		int current_row, int current_column)
{
	if (current_column == 1)
	{
		if (current_row == 1)
			ft_putchar('A'); 
		else if (current_row == row)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (current_column == column)
	{
		if (current_row == 1)
			ft_putchar('C');
		else if (current_row == row)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	if (1 < current_column && current_column < column)
	{
		if (current_row == 1 || current_row == row)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int column, int row)
{
	int	current_row;
	int	current_column;

	current_row = 1;
	if (row > 0 && column > 0)
	{
		while (row >= current_row)
		{
			current_column = 1;
			while (column >= current_column)
			{
				print_wanted_char(row, column, current_row, current_column);
				current_column++;
			}
			current_row++;
			ft_putchar('\n');
		}
	}
}
