/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:43:39 by obarais           #+#    #+#             */
/*   Updated: 2024/11/23 12:54:06 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *s)
{
	int	i;
    int res;

	i = 0;
    res = 0;
	if (s == NULL)
        return (-1);
	while (s[i] != '\0')
	{
		res = res + ft_putchar(s[i]);
		i++;
	}
    return (res);
}