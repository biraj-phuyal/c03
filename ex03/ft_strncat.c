/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:41:56 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/05 12:03:34 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest)
		dest++;
	while (0 < nb-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
/*
int	main()
{
	char src[] = "Hello";
	char dest[50] = "World!";
	ft_strncat(dest, src, 3);
	printf("%s\n", dest);
}*/
