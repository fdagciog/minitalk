/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:04:26 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 19:14:09 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signal)
{
	static int	chr;
	static int	counter;

	if (signal == SIGUSR1)
		chr |= (1 << counter);
	counter++;
	if (counter == 8)
	{
		ft_putchar_fd(chr, 1);
		chr = 0;
		counter = 0;
	}
}

int	main(int argc, char **argv)
{
	int	process_id;

	(void)argv;
	if (argc != 1)
	{
		ft_putstr_fd("Yanlış Argüman Tekrar Deneyiniz", 1);
		return (1);
	}
	process_id = getpid();
	ft_putstr_fd("Procces ID: ", 1);
	ft_putnbr_fd(process_id, 1);
	ft_putstr_fd("\nMesaj Bekleniyor...\n", 1);
	while (argc == 1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
	return (0);
}
