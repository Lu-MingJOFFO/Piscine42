/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:18:33 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/24 15:18:46 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j] && i < j)
			{
				a = tab[i];
				tab[i] = tab[j];
				tab[j] = a;
			}
			j++;
		}
		j = 1;
		i++;
	}
}

/*int	main(void)
{
	int	tableau[7] = {9, 56, -4, 23, 0, 1, 9};
	int	k;

	k = 0;
	while (k < 7)
	{
		printf("%d ", tableau[k]);
		k++;
	}
	printf("\n");
	ft_sort_int_tab(tableau, 7);
	k = 0;
	while (k < 7)
	{
		printf("%d ", tableau[k]);
		k++;
	}
}*/
