/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatas <aatas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 14:07:22 by aatas             #+#    #+#             */
/*   Updated: 2022/12/11 20:33:22 by aatas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}