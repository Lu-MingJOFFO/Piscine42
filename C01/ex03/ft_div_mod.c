/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:39:41 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/21 12:39:54 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	*ptr1;
	int	*ptr2;

	nbr1 = 42;
	nbr2 = 10;
	ptr1 = &nbr1;
	ptr2 = &nbr2;
	ft_div_mod(nbr1, nbr2, ptr1, ptr2);
	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);
	return (0);
}*/
