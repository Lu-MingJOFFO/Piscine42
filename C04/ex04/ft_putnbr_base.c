/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:30:07 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/31 18:30:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

int	ft_valid_base(char *base)
{
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while ((size - 1) > i)
		{
			if (base[i] == base[size - 1])
				return (0);
			size--;
		}
		size = ft_strlen(base);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	a;
	unsigned int	size;

	if (ft_valid_base(base) == 0)
		return ;
	size = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		a = -nbr;
	}
	else
		a = nbr;
	if (a >= size)
		ft_putnbr_base(a / size, base);
	ft_putchar(base[a % size]);
}

/*int	main(void)
{
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(12, "01");
        write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-100, "0123");
	write(1, "\n", 1);
	ft_putnbr_base(125, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(111, "01et1");
	write(1, "\n", 1);
	ft_putnbr_base(111, "1");
	write(1, "\n", 1);
	ft_putnbr_base(111, "01+");
        write(1, "\n", 1);
	ft_putnbr_base(2147483648, "01");
        write(1, "\n", 1);
        ft_putnbr_base(-42, "\t0123456789abcdef");
}*/
