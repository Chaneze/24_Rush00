/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:33:23 by caroua            #+#    #+#             */
/*   Updated: 2017/08/14 19:33:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_extremity(int column, int count_column)
{
	char a;
	char b;
	char c;

	a = 'A';
	b = 'B';
	c = 'C';
	ft_putchar(a);
	if (column >= 2)
	{
		while (count_column < column)
		{
			ft_putchar(b);
			count_column++;
		}
		ft_putchar(c);
		count_column = 2;
	}
	ft_putchar('\n');
}

void	ft_middle(int column, int count_column)
{
	char b;

	b = 'B';
	ft_putchar(b);
	if (column >= 2)
	{
		while (count_column < column)
		{
			ft_putchar(' ');
			count_column++;
		}
		ft_putchar(b);
		count_column = 2;
	}
	ft_putchar('\n');
}

void	rush(int column, int line)
{
	int	count_column;
	int	count_line;

	count_column = 2;
	count_line = 1;
	while (count_line <= line)
	{
		if (((count_line == 1) || (count_line == line)) && (column > 0))
		{
			ft_extremity(column, count_column);
		}
		if ((count_line > 1) && (count_line < line) && (column > 0))
		{
			ft_middle(column, count_column);
		}
		count_line++;
	}
}
