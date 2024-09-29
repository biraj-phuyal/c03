/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:56:16 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/29 18:51:08 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main()
{
	char s1[] = "hello";
	char s2[] = "lololol";
	int return_value = ft_strcmp(s1, s2);
	printf("%s, %s -> %d\n", s1, s2, return_value);
}
