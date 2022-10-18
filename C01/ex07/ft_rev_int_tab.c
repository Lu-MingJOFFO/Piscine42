/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:04:01 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/23 23:04:11 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (i < size)
	{
		a = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = a;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int	tableau[5] = {1, 2, 3, 4, 5};
	int	j;

	j = 0;
	while (j < 5)
	{
		printf("%d", tableau[j]);
		j++;
	}
	printf("\n");
	ft_rev_int_tab(tableau, 5);
	j = 0;
	while (j < 5)
	{
		printf("%d", tableau[j]);
		j++;
	}
}*/
