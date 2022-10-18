/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:46:41 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/28 13:46:45 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	chain[] = "abcz123ABCZ";

	printf("%s\n", chain);
//      ft_strlowcase(chain);
//      printf("%s\n", chain);
	printf("%s", ft_strlowcase(chain));
}*/
