/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowerase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:29:55 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:30:04 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 'a') || ('z' < str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*chain;

	chain = "";
	printf("%d", ft_str_is_lowercase(chain));
}*/
