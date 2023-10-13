/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:05:03 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 17:05:05 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;

	if (!n || src == dest)
		return (dest);
	a = 0;
	while (a < n)
	{
		((unsigned char *)dest)[a] = ((unsigned char *)src)[a];
		a++;
	}
	return (dest);
}

/*int	main()
{
	char dest[] = "busra";
	char src[] = "yilmaz";
	ft_memcpy(dest, src, 3);
	printf("%s | %s", dest,src);
}*/