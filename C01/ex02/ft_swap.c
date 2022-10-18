/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:54:36 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/21 10:54:47 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}

/*int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	*ptr1;
	int	*ptr2;

	nbr1 = 12;
	nbr2 = 34;
	ptr1 = &nbr1;
	ptr2 = &nbr2;
	printf("%d\n", nbr1);
	printf("%d\n", nbr2);
	ft_swap(ptr1, ptr2);
	printf("%d\n", nbr1);
	printf("%d\n", nbr2);
	return (0);
}*/
