/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sencetin <sencetin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:07:28 by sencetin          #+#    #+#             */
/*   Updated: 2024/08/20 11:07:28 by sencetin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			j = i + 1;
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			i++;
		}
		size--;
	}
}
