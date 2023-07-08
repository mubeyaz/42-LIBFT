/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:53:43 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/08 13:53:44 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int	main(void)
{
	const char *str = "Merhaba, dünya!";
	char *str_copy = ft_strdup(str);

	if (str_copy != NULL)
	{
		printf("Orijinal string: %s\n", str);
		printf("Kopyalanan string: %s\n", str_copy);
		free(str_copy);
	}
	else
	{
		printf("Hafıza tahsisi başarısız oldu.\n");
	}

	return (0);
}
*/