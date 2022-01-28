/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjeghba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:37:39 by sdjeghba          #+#    #+#             */
/*   Updated: 2016/12/24 21:52:52 by sdjeghba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft2.h"

char				*ft_strcat(char *s1, const char *s2)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
