/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:59:22 by fdagciog          #+#    #+#             */
/*   Updated: 2023/06/11 16:59:36 by fdagciog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	tmp;

	i = 0;
	sign = 1;
	tmp = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		tmp = (tmp * 10) + (str[i] - 48);
		i++;
	}
	return (tmp * sign);
}

/*int main()
{
	printf("%d\n", ft_atoi("-123"));
}*/