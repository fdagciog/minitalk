/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:04:09 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 19:55:32 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_sender(int process_id, char c)
{
	int	counter;

	counter = 0;
	while (counter < 8)
	{
		if ((c & (1 << counter)) != 0)
			kill(process_id, SIGUSR1);
		else
			kill(process_id, SIGUSR2);
		usleep(100);
		counter++;
	}
}

int	main(int argc, char **argv)
{
	int	process_id;
	int	i;

	if (argc != 3)
	{
		ft_putstr_fd("Yanlış Argüman Tekrar Deneyiniz", 1);
		return (1);
	}
	i = 0;
	process_id = ft_atoi(argv[1]);
	while (argv[2][i] != '\0')
	{
		bit_sender(process_id, argv[2][i]);
		i++;
	}
	bit_sender(process_id, '\n');
	return (0);
}
