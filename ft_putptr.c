/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <giromeo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:04:34 by giromeo           #+#    #+#             */
/*   Updated: 2024/05/08 22:04:34 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(long long unsigned n, size_t *ret, int check, size_t *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (!check)
	{
		ft_putchar_fd('0', 1, ret);
		ft_putchar_fd('x', 1, ret);
		check++;
	}
	if (n > 15)
		ft_putptr(n / 16, ret, check, i);
	ft_putchar_fd(hex[n % 16], 1, ret);
	if (n < 16)
		*i = *i + 1;
}
