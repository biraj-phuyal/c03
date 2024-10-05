/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:34:31 by bphuyal           #+#    #+#             */
/*   Updated: 2024/10/05 13:15:03 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int main()
{
        char s1[] = "hellooooo";
        char s2[] = "hellooo";
        int return_value = ft_strncmp(s1, s2, 5);
        printf("%s.. %s -> %d\n", s1, s2, return_value);
	return 0;
}*/
