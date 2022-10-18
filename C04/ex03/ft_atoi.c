/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:32:29 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/30 18:32:35 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while ((str[i] == 32) || (8 < str[i] && str[i] < 14))
		i++;
	while ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
			j = j * (-1);
		i++;
	}
	while (47 < str[i] && str[i] < 58)
	{
		k = k * 10 + (str[i] - 48);
		i++;
	}
	return (j * k);
}

/*int	main(void)
{
	char	*string;

	string = "  - 45hh";
	printf("%d\n", ft_atoi(string));
	printf("%d\n", atoi(string));
}*/
