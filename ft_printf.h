/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iizquier <iizquier@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:55:56 by iizquier          #+#    #+#             */
/*   Updated: 2024/06/11 15:53:07 by iizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int nbr, char *base);
int		ft_putnbr(int nbr);
int		ft_printf(const char *format, ...);
int		ft_putptr(uintptr_t ptr);
int		ft_putunsigned(unsigned int n);
size_t	ft_strlen(const char *str);

#endif