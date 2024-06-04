/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:55:56 by iizquier          #+#    #+#             */
/*   Updated: 2024/05/31 13:46:57 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putstr();
int		ft_puthex();
int		ft_putnbr();
int		ft_printf(const char *format, ...);
int		ft_putptr();
int		ft_putunsigned();

#endif