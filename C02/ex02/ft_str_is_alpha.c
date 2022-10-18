/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:23:59 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:24:27 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 64) || (91 <= str[i] && str[i] <= 96) || (123 <= str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*chain;

	chain = "";
	printf ("%d", ft_str_is_alpha(chain));
}*/
