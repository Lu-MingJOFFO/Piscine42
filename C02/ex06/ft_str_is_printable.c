/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:38:08 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:38:14 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] < 32) || (126 < str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*chain;

	chain = "klm' 1!";
	printf("%d", ft_str_is_printable(chain));
}*/
