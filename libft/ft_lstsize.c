/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:01:03 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 17:01:03 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*int main()
{
	t_list *s;
	t_list *a;
	t_list *b;

	s = malloc(sizeof(t_list));
	s ->content = "makarna";
	s ->next = NULL;
	a = malloc(sizeof(t_list));
	a ->content = "okul";
	a ->next = NULL;
	s -> next= a;
	b = malloc(sizeof(t_list));
	b ->content = "yeter";
	b -> next =NULL;
	a ->next = b;
	printf("%d", ft_lstsize(s));
}*/