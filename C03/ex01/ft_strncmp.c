/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:47:45 by ljoffo            #+#    #+#             */
/*   Updated: 2021/10/27 18:47:59 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
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
	printf("%d\n", ft_strncmp(chain1, chain2, 8));
	printf("%d\n", strncmp(chain1, chain2, 8));
}*/
