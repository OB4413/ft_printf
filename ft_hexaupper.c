/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 21:20:32 by obarais           #+#    #+#             */
/*   Updated: 2024/11/24 21:35:30 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexaupper(long nb)
{
    int res;
    char h[17] = "0123456789ABCDEF";
    
    res = 0;
    if (nb > 16)
    {
        res = res + ft_hexaupper(nb / 16);
        res = res + ft_hexaupper(nb % 16);
    }
    else
        res = res + ft_putchar(h[nb]);
    return (res);
}