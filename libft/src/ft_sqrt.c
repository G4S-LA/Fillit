/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poatmeal <poatmeal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:55:22 by poatmeal          #+#    #+#             */
/*   Updated: 2019/10/28 12:32:52 by poatmeal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	else
	{
		i = 1;
		while ((i * i) < nb)
			i++;
		return (i);
	}
}
