/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sencetin <sencetin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:14:30 by sencetin          #+#    #+#             */
/*   Updated: 2024/08/28 10:29:38 by sencetin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0 || (nb == 0))
		return (0);
	if (nb != 0)
	{
		while (power > 0)
		{
			result *= nb;
			--power;
		}
	}
	return (result);
}
