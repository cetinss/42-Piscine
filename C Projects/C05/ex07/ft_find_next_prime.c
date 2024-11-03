/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sencetin <sencetin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:17:26 by sencetin          #+#    #+#             */
/*   Updated: 2024/08/28 10:23:11 by sencetin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		return (2);
	while (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
