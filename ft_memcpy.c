/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:03 by jarregui          #+#    #+#             */
/*   Updated: 2021/07/14 23:25:27 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char		*dest;
	unsigned const char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	while ((dest != 0 || source != 0) && n--)
		dest[n] = source[n];
	return (dst);
}