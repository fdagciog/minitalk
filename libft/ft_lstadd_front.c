/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:00:48 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 17:00:48 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*int main()
{
	t_list	*s;
	t_list	*a;
	t_list	*result;

	s = malloc(sizeof(t_list));
	s -> content = "makarna";
	s ->next = NULL;
	a = malloc(sizeof(t_list));
	a -> content = "okul";
	a -> next = NULL;
	s->next = a;
	//ft_lstadd_front(&s, a);
	//printf("%s\n", s->content);
	//printf(" %s\n", s->next->content);
	//printf("%s\n", a ->content);
	result = ft_lstadd_front(&s, a);
	printf("%s", result->content);
	//printf("%s\n", s->content);
	//printf("%s\n", s->next->content);
	//printf(" %s\n", s->next->next->content);
	//printf("%s", a ->content);
}*/
