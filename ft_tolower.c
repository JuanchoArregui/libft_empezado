/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:43:24 by jarregui          #+#    #+#             */
/*   Updated: 2021/07/14 12:44:15 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}


// int	main(void)
// {
// 	char	*str;

// 	str = (char *)malloc(100);
// 	strcpy(str, "AQU1habiaTEXTOy_db3_salir # TODOen minusculas");
// 	printf("%s\n", str);
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }