/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:07:46 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/05 13:11:49 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int	main()
{
	char dest[10] = "lolol";
	char src[] = ", world!";
	unsigned int size = sizeof(dest);
	unsigned int result = ft_strlcat(dest, src, size);
	printf("Result = %u\n", result);
	printf("Destination = %s\n", dest);

}*/
