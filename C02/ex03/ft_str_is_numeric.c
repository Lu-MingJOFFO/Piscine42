/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:26:53 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:27:07 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (57 < str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*chain;

	chain = "";
	printf("%d", ft_str_is_numeric(chain));
}*/
