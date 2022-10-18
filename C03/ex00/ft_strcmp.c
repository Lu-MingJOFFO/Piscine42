/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:59:21 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/27 15:59:44 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*chain1;
	char	*chain2;

	chain1 = "";
	chain2 = "hello";
	printf("%s\n" "%s\n", chain1, chain2);
	printf("%d\n", ft_strcmp(chain1, chain2));
	printf("%d\n", strcmp(chain1, chain2));
}*/
