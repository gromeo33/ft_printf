/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giromeo <giromeo@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:04:51 by giromeo           #+#    #+#             */
/*   Updated: 2024/05/08 22:04:51 by giromeo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd, size_t *ret, size_t *i)
{
	size_t	x;
	size_t	l;
	char	*nl;

	x = 0;
	*i = *i + 1;
	nl = "(null)";
	if (s == NULL)
	{
		while (x < 6)
			ft_putchar_fd(nl[x++], fd, ret);
		return ;
	}
	if (!s)
		return ;
	l = ft_strlen(s);
	while (x < l)
		ft_putchar_fd(s[x++], fd, ret);
}
