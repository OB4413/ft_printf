/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:47:52 by obarais           #+#    #+#             */
/*   Updated: 2024/11/24 18:37:37 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexalower(long nb)
{
    int res;
    char h[17] = "0123456789abcdef";
    
    res = 0;
    if (nb > 16)
    {
        res = res + ft_hexalower(nb / 16);
        res = res + ft_hexalower(nb % 16);
    }
    else
        res = res + ft_putchar(h[nb]);
    return (res);
}
