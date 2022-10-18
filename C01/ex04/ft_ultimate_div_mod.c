/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:32:52 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/21 13:33:15 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = *a / *b;
	*b = nbr % *b;
}

/*int	main(void)
{
	int	nb1;
	int	nb2;
	int	*ptr1;
	int	*ptr2;

	nb1 = 42;
	nb2 = 10;
	ptr1 = &nb1;
	ptr2 = &nb2;
	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);
	return (0);
}*/
