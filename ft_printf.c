/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 09:30:03 by obarais           #+#    #+#             */
/*   Updated: 2024/11/23 12:06:19 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    int i;

	i = write(1, &c, 1);
    return (i);
}
int ft_printf(const char *Format, ...)
{
    int i;
    va_list lst;

    va_start(lst, Format);
    if (!Format)
        return (-1);
    while (Format[i])
    {
        if (Format[i] == '%')
        {
            i++;
            if (Format[i] == 'c')
            {
                char c = va_arg(lst, char);
                i = ft_putchar(c);
                break;
            }
        }
        i++;
    }
    va_end(lst);
    return (i);
}
int main()
{
    int i = ft_printf("%c", 'h');
}