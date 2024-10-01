/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:46:18 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/01 22:38:44 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*original_str;
	char	*find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		original_str = str;
		find = to_find;
		while (*original_str && *find && *original_str == *find)
		{
			original_str++;
			find++;
		}
		if (*find == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "hello world";
	char find[] = "w";
	char *result = ft_strstr(str, find);
	if (result)
		printf("Found = %s\n", result);
	else
		printf("Not found\n");
	return 0;
}
*/
