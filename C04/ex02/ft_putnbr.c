/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:07:21 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 19:08:26 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		write(1, "-", 1);
		a = -nb;
	}
	else
		a = nb;
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar((a % 10) + 48);
}

/*int	main(void)
{
	ft_putnbr(-425);
}*/
