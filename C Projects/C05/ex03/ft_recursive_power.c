/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sencetin <sencetin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:15:19 by sencetin          #+#    #+#             */
/*   Updated: 2024/08/27 17:15:25 by sencetin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
