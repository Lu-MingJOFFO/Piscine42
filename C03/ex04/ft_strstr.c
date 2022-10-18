/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:05:06 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:05:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		i++;
	}
	return ((void *)0);
}

/*int	main(void)
{
	char	*hay;
	char	*nee;

	hay = "need to find the needle in the haystack";
	nee = "needle";
	printf("%s\n", hay);
	printf("%s\n", nee);
	printf("%s\n", ft_strstr(hay, nee));
	printf("%s\n", strstr(hay, nee));
}*/
