/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:02:46 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 14:02:53 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (96 < str[i] && str[i] < 123)
		str[i] = str[i] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i - 1] < '0') || ('9' < str[i - 1]
					&& str[i - 1] < 'A') || ('Z' < str[i - 1]
					&& str[i - 1] < 'a') || ('z' < str[i - 1]))
			&& (96 < str[i] && str[i] < 123))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	chain[] = "salut, comment tu vAs ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", chain);
	ft_strcapitalize(chain);
	printf("%s", chain);
}*/
