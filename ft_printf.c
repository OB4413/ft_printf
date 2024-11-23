/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:30:03 by obarais           #+#    #+#             */
/*   Updated: 2024/11/23 15:05:02 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_lst(va_list lst, const char *Format, int *i)
{
    int res;

    res = 0;
    if(Format[*i] == 'c')
        res += ft_putchar(va_arg(lst, int));
    else if(Format[*i] == 's')
        res += ft_putstr(va_arg(lst, char *));
    else if(Format[*i] == 'd' || Format[*i] == 'i')
        res += ft_putnbr(va_arg(lst, int));
    return (res);
}

int ft_printf(const char *Format, ...)
{
    int i;
    int res;
    va_list lst;

    i = 0;
    res = 0;
    va_start(lst, Format);
    if (Format == NULL)
        return (-1);
    while (Format[i])
    {
        if (Format[i] == '%')
        {
            i++;
            res += ft_print_lst(lst, Format, &i);
        }
        i++;
    }
    va_end(lst);
    return (res);
}
