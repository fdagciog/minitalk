/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:02:14 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 17:02:14 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*twin;

	twin = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!(twin))
		return (0);
	i = 0;
	while (str[i])
	{
		twin[i] = str[i];
		i++;
	}
	twin[i] = '\0';
	return (twin);
}

/*int main()
{
	char str[] = "busra";
	ft_strdup(str);
	printf("%s",str);
}*/