/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:34:28 by ishenriq          #+#    #+#             */
/*   Updated: 2023/09/07 18:28:48 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	range = (int *) 0;
	size = max - min;
	i = 0;
	if (size <= 0)
		return (range);
	else
	{
		range = malloc(size * sizeof(int));
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}
