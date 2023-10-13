/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:01:09 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 17:01:11 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (((unsigned char *)s)[a] == (unsigned char)c)
			return ((void *)(s + a));
		a++;
	}
	return (0);
}

/*int	main()
{
	char s[] = "kirkikikocaeli";

	printf("%s", ft_memchr(s, 'r', 5));
	return (0);
}*/
