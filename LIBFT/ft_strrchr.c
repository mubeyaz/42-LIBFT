/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:52:52 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/07 15:52:54 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = NULL;
	while (1)
	{
		if (s[i] == (char)c)
			p = (char *)(s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (p);
}

/*
int	main(void)
{
	const char *str = "Merhaba Dünya!";
	char *ptr = ft_strrchr(str, 'a');

	if (ptr != NULL)
	{
		printf("Son 'a' karakteri %ld. indekste bulundu.\n", ptr - str);
	}
	else
	{
		printf("'a' karakteri bulunamadi.\n");
	}

	return (0);
}
*/