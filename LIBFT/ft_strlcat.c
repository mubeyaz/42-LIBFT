/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:33:10 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/07/14 14:52:57 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	value;

	if (size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size < dlen)
		value = slen + size;
	else
		value = dlen + slen;
	i = 0;
	while (src[i] && (dlen + i) < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (value);
}

/*
int main()
{
	char dst[200] = "Muhammed";
	char *src = " Yusuf";
	size_t res = ft_strlcat(dst, src, 11);

	printf("%s \n", dst);
	printf(" uzunluk : %zu", res);
}
*/