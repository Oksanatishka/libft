/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:58:23 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:58:25 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Applies the function f to each character of the string passed
** as argument. Each character is passed by address to f to be
** modified if necessary.
** Param. #1 The string to iterate.
** Param. #2 The function to apply to each character of s.
** Return value None.
** Libc functions None.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s != '\0')
		{
			f(s);
			s++;
		}
	}
}