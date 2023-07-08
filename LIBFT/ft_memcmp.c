/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:36:01 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/07 17:44:29 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[];
	char	str2[];
	int		result;

	str1[] = "Hello";
	str2[] = "World";
	result = ft_memcmp(str1, str2, 5);
	if (result < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if (result > 0)
	{
		printf("str1 is greater than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	return (0);
}
*/