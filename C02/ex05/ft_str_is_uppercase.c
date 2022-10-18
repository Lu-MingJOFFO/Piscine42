/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:35:03 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:35:13 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'A') || ('Z' < str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*chain;

	chain = "";
	printf("%d", ft_str_is_uppercase(chain));
}*/
