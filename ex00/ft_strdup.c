/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:20:46 by ishenriq          #+#    #+#             */
/*   Updated: 2023/09/07 18:28:49 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		count;

	i = 0;
	count = i;
	while (src[count] != '\0')
		count++;
	dup = malloc((count + 1) * sizeof(char));
	while (i <= count)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
