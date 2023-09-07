/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:12:02 by ishenriq          #+#    #+#             */
/*   Updated: 2023/09/07 18:28:47 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*rgn_allocated;

	i = 0;
	if (min >= max)
	{
		*range = (int *) 0;
		return (0);
	}
	size = max - min;
	rgn_allocated = malloc(size * sizeof(int));
	if (rgn_allocated == (int *) 0)
		return (-1);
	else
	{
		while (min < max)
		{
			rgn_allocated[i] = min;
			min++;
			i++;
		}
	}
	*range = rgn_allocated;
	return (size);
}
